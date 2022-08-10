@echo off
cls
path=C:\Users\kk9767\Desktop\My Files\Programes\cygwin64\bin
@pause
@echo Compiling....
cd %CD%
g++ -Wall -std=c++11 main.cpp -o main.exe
@echo Completed....
main.exe
@pause