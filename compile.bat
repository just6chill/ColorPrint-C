@echo off

gcc -c main.c

gcc -c color.c

gcc -o test.exe main.o color.o