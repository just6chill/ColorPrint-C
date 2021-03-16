# ColorPrint-C
A small implentation for C which allow you to print messages colored. Its working with the Win API.

usage:
 
```c
ColorPrint(COLORCODE, "text\n");
```
    
example:

```c
ColorPrint(GREEN, "Hello World\n")
```

---
    
avalible color codes

| color code | color |
|------------|------|
| GREEN | green |
| RED | red |
| BLUE | blue |
| YELLOW | yellow |
| LBLUE | light blue |
| VIOLET | violet |
| LGREEN | light green |
| LRED | light red |
| CYAN | cyan |
| LYELLOW | light yellow |
| LCYAN | light cyan |
| PINK | pink |

---

here is a display output

![cmd output](https://media.discordapp.net/attachments/629266323108790274/821321995802509312/unknown.png)

---

compile:

    gcc -c main.c

    gcc -c color.c

    gcc -o output.exe main.o color.o
    
![GitHub all releases](https://img.shields.io/github/downloads/just6chill/ColorPrint-C/total)
![GitHub last commit](https://img.shields.io/github/last-commit/just6chill/ColorPrint-C)
![GitHub top language](https://img.shields.io/github/languages/top/just6chill/ColorPrint-C)

