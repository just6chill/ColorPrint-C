#ifndef _COLOR_PRINT_H_
#define _COLOR_PRINT_H_

#include <stdio.h>
#include <windows.h>
#include <stdarg.h>

void ColorPrint(int color, char *text, ...);

/* define colors */
#define BLACK      0x00
#define BLUE       0x01
#define GREEN      0x02
#define CYAN       0x03
#define RED        0x04
#define VIOLET     0x05
#define YELLOW     0x06
#define LGREY      0x07
#define GREY       0x08
#define LBLUE      0x09
#define LGREEN     0x0A
#define LCYAN      0x0B
#define LRED       0x0C
#define LVIOLET    0x0D
#define LYELLOW    0x0E
#define WHITE      0x0F
#define BG_BLACK   0x00
#define BG_BLUE    0x10
#define BG_GREEN   0x20
#define BG_CYAN    0x30
#define BG_RED     0x40
#define BG_VIOLET  0x50
#define BG_YELLOW  0x60
#define BG_LGREY   0x70
#define BG_GREY    0x80
#define BG_LBLUE   0x90
#define BG_LGREEN  0xA0
#define BG_LCYAN   0xB0
#define BG_LRED    0xC0
#define BG_LVIOLET 0xD0
#define BG_LYELLOW 0xE0
#define BG_WHITE   0xF0

/*define aliases for colors */
#define PINK LVIOLET
#define BG_PINK BG_LVIOLET
#define TEAL CYAN
#define BG_TEAL BG_CYAN
#define LTEAL LCYAN
#define BG_LTEAL BG_LCYAN
#define SILVER LGREY
#define BG_SILVER BG_LGREY
#define OLIVE YELLOW
#define BG_OLIVE BG_YELLOW

void ColorPrint(int color, char *text, ...){

	/* save current text color */
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	va_list pointer;
	va_start(pointer, text);

	SetConsoleTextAttribute(hConsole, color);

	vprintf(text, pointer);
	va_end(pointer);

	/* restore saved attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);

}

#endif
