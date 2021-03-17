# ColorPrint-C
A small implentation for C which allow you to print messages colored. Its working with the Win API.

Usage:
 
```c
ColorPrint(COLORCODE, "text\n");
```
    
Example:

```c
ColorPrint(GREEN, "Hello World\n")
```

---
    
Avalible color codes (use BG\_COLORCODE to set the background):

|Color code|Color|
|-|-|
|BLACK|Black|
|BLUE|Dark blue|
|GREEN|Dark green|
|RED|Dark red|
|VIOLET|Violet|
|YELLOW|Yellow|
|LGREY|Light grey/gray|
|GREY|Grey/gray|
|LBLUE|Light blue|
|LGREEN|Light green|
|LCYAN|Light cyan/teal|
|LRED|Light red|
|LVIOLET|Light violet/pink|
|LYELLOW|Light yellow|
|WHITE|white|

|Color code|Alias|
|-|-|
|LVIOLET|PINK|
|CYAN|TEAL|
|LCYAN|LTEAL
|LGREY|SILVER|
|YELLOW|OLIVE|

---

Here is a display output:

![cmd output](https://media.discordapp.net/attachments/629266323108790274/821321995802509312/unknown.png)

---

Compile:

Windows:
```
    gcc main.c -o cprint.exe
```
Linux (cross-compile):
```
    i686-w64-mingw32-gcc main.c -o cprint.exe
```
---
    
![GitHub all releases](https://img.shields.io/github/downloads/just6chill/ColorPrint-C/total)
![GitHub last commit](https://img.shields.io/github/last-commit/just6chill/ColorPrint-C)
![GitHub top language](https://img.shields.io/github/languages/top/just6chill/ColorPrint-C)

