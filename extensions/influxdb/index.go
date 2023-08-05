package main

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "extensionCallback.h"
*/
import "C"

import (
	"fmt"
	"strconv"
	"strings"
	"time"
	"unsafe"

	influxdb2 "github.com/influxdata/influxdb-client-go/v2"
	"github.com/influxdata/influxdb-client-go/v2/api"
)

var extensionCallbackFnc C.extensionCallback

func runExtensionCallback(name *C.char, function *C.char, data *C.char) C.int {
	return C.runExtensionCallback(extensionCallbackFnc, name, function, data)
}

//export goRVExtensionVersion
func goRVExtensionVersion(output *C.char, outputsize C.size_t) {
	result := C.CString("Prometheus - Version 1.0")
	defer C.free(unsafe.Pointer(result))
	var size = C.strlen(result) + 1
	if size > outputsize {
		size = outputsize
	}
	C.memmove(unsafe.Pointer(output), unsafe.Pointer(result), size)
}

// Save writeAPI as global variables to be used in goRVExtensionArgs data function
var writeAPI api.WriteAPI

//export goRVExtensionArgs
func goRVExtensionArgs(output *C.char, outputsize C.size_t, input *C.char, argv **C.char, argc C.int) {
	defer func() {
		if err := recover(); err != nil {
			returnString(output, outputsize, fmt.Sprintf("ERROR: %s", err))
			return
		}
	}()
	function := C.GoString(input)
	params := make([]string, argc)
	for i := 0; i < int(argc); i++ {
		params[i] = C.GoString(*argv)
		argv = (**C.char)(unsafe.Pointer(uintptr(unsafe.Pointer(argv)) + unsafe.Sizeof(uintptr(0))))
	}
	switch function {
	case "start": // start <endpoint> <token> <org> <bucket>
		if len(params) != 4 {
			returnString(output, outputsize, fmt.Sprintf("ERROR: Invalid number of parameters for start. Expected 4 <endpoint> <token> <org> <bucket>, got %d", len(params)))
			return
		}
		client := influxdb2.NewClient(parseStringParam(params[0]), parseStringParam(params[1]))
		writeAPI = client.WriteAPI(parseStringParam(params[2]), parseStringParam(params[3]))
		returnString(output, outputsize, fmt.Sprintf("INFO: Created connection to InfluxDB on %s", params[0]))
	case "data": // data <key> <value>
		if len(params) != 2 {
			returnString(output, outputsize, fmt.Sprintf("ERROR: Invalid number of parameters for data. Expected 2 <key> <value>, got %d", len(params)))
			return
		}
		// Check if the writeAPI is initialized
		if writeAPI == nil {
			returnString(output, outputsize, fmt.Sprintf("ERROR: InfluxDB is not initialized. Please call start first"))
			return
		}
		// Parse value to float64
		value, err := strconv.ParseFloat(parseStringParam(params[1]), 64)
		if err != nil {
			returnString(output, outputsize, fmt.Sprintf("ERROR: Invalid value for data. Expected float64, got %s", params[1]))
			return
		}
		// Create point
		p := influxdb2.NewPoint(parseStringParam(params[0]), nil, map[string]interface{}{"value": value}, time.Now())
		// Write point
		writeAPI.WritePoint(p)
		returnString(output, outputsize, fmt.Sprintf("INFO: Added data %s %s %f", params[0], params[1], value))
	default:
		returnString(output, outputsize, fmt.Sprintf("ERROR: Invalid function %s", function))
	}
}

//export goRVExtension
func goRVExtension(output *C.char, outputsize C.size_t, input *C.char) {
	// Not used
	returnString(output, outputsize, "WARNING: This method is unavailable. Please use CallExtensionArgs. More info: https://community.bistudio.com/wiki/callExtension")
}

//export goRVExtensionRegisterCallback
func goRVExtensionRegisterCallback(fnc C.extensionCallback) {
	extensionCallbackFnc = fnc
}

func returnString(output *C.char, outputsize C.size_t, result string) {
	temp := C.CString(result)
	defer C.free(unsafe.Pointer(temp))
	var size = C.strlen(temp) + 1
	if size > outputsize {
		size = outputsize
	}
	C.memmove(unsafe.Pointer(output), unsafe.Pointer(temp), size)
}

//function to parse string parameters to remove all quotes
func parseStringParam(param string) string {
	return strings.ReplaceAll(param, "\"", "")
}

func main() {}