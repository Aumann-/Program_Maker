@echo off
set PATH=C:\MinGW\bin;%PATH%
set PATH=C:\MinGW\msys\1.0\bin;%PATH%
g++ test_out.cpp -o test_out.exe
PAUSE
start test_out.exe
PAUSE
g++ o.cpp -o o.exe
PAUSE
start o.exe
PAUSE