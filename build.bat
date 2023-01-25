@REM THIS SCRIPT COMPILES, CALCHARM ON WINDOWS 10, 8, 7, Vista, XP, and many more !!

windres ./asset/icon.rc -O coff -o ./asset/my.res
g++ -static-libgcc -static-libstdc++ ./src/main.cpp ./asset/my.res -o calcharm
mkdir build/CalCharm
move "calcharm.exe" "./build/CalCharm"