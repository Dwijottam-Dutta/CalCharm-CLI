@REM THIS BATCH SCRIPT WOULD COMPILE AND BUILD CALCHARM FOR WINDOWS

windres ./asset/icon.rc -O coff -o ./asset/my.res
gcc -static-libgcc -static-libstdc++ ./src/main.c ./asset/my.res -o calcharm
mkdir build/CalCharm
move "calcharm.exe" "./build/CalCharm"