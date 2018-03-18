#include<stdio.h>

#define esc 27

enum attr {rst, bld, dim};
enum fg {fgblk=30, fgred=31, fggrn=32};

#define deftxt "\033[0m"

int main()
{
 printf("%c[%d;%dmHi there%s\n", esc, bld, fgred, deftxt);
 printf("%c[%d;%dmHi there%s\n", esc, dim, fgred, deftxt);
 printf("%c[%d;%dmHi there%s\n", esc, bld, fggrn, deftxt);
 printf("%c[%d;%dmHi there%s\n", esc, dim, fggrn, deftxt);
 
}
