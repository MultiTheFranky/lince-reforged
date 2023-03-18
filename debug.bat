@echo off
rem =========ZONE TO EDIT========
rem Define Disk
set ARMA3_PARAMS=-mod=!Workshop\@CBA_A3;!Workshop\@ace;z\lince -world=empty -noPause -showScriptErrors -filePatching -skipIntro -noSplash -noPause -noPauseAudio
rem Define Arma 3 directory
set ARMA3_DIR="C:\Program Files (x86)\Steam\steamapps\common\Arma 3"
rem =============================

rem create a loop 
:fullLoop

rem Execute Hemtt Dev
hemtt.exe dev

rem Define Arma 3 executable
:loopRestartOnly
set ARMA3_EXE=%ARMA3_DIR%\arma3_x64.exe

rem Check if Arma 3 executable exists
if not exist %ARMA3_EXE% (
  echo Arma 3 executable does not exist, please check the path.
  exit
)

rem Run Arma 3
start "" %ARMA3_EXE% %ARMA3_PARAMS%

rem start the monitoring script
start "Arma 3 Monitoring" monitoringLogs.bat

rem Check every 5 seconds if Arma 3 is still running
:loop
tasklist /fi "imagename eq arma3_x64.exe" | find /i /n "arma3_x64.exe" >nul
if errorlevel 1 goto armaClosed
timeout /t 5 >nul
goto loop
:armaClosed

rem close the monitoring script
taskkill /fi "WindowTitle eq Arma 3 Monitoring - monitoringLogs.bat" >nul

rem Restart options
ECHO 1.Rebuild and Restart
ECHO 2.Restart only
ECHO 3.Close
ECHO.

CHOICE /C 123 /M "Select an option: "
IF ERRORLEVEL 3 GOTO stopDebug
IF ERRORLEVEL 2 GOTO loopRestartOnly
IF ERRORLEVEL 1 GOTO fullLoop

:stopDebug
exit