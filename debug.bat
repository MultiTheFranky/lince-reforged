@echo off
rem =========ZONE TO EDIT========
rem Define Disk
set ARMA3_PARAMS=-mod=@CBA_A3;@ace;z\lince -world=empty -noPause -showScriptErrors -filePatching
rem Define Arma 3 directory
set ARMA3_DIR="C:\Program Files (x86)\Steam\steamapps\common\Arma 3"
rem =============================
rem Execute Hemtt Dev
hemtt.exe dev
rem Define Arma 3 executable
set ARMA3_EXE=%ARMA3_DIR%\arma3_x64.exe
rem Check if Arma 3 executable exists
if not exist %ARMA3_EXE% (
  echo Arma 3 executable does not exist, please check the path.
  goto exit
)
rem Run Arma 3
start "" %ARMA3_EXE% %ARMA3_PARAMS%
pause