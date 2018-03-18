#include<stdio.h>

#define esc 27
enum attr {rst, bld, dim};
enum fg {fgblk=30, fgred=31, fggrn=32};
#define deftxt printf("%c[0m", esc)

int main()
{
 printf("%c[%d;%dmHi there", esc, bld, fgred);
 deftxt;
 printf("\n");
 printf("%c[%d;%dmHi there", esc, dim, fgred);
 deftxt;
 printf("\n");
 printf("%c[%d;%dmHi there", esc, bld, fggrn);
 deftxt;
 printf("\n");
 printf("%c[%d;%dmHi there", esc, dim, fggrn);
 deftxt;
 printf("\n");
 
}
