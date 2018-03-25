#include<stdio.h>

#define clrscn printf("\033[2J")
#define poscur(row,col) printf("\033[%d;%dH",row,col)
#define deftxt printf("\033[0m")
enum attr {rst, bld, dim};
enum fg {fgblk=30, fgred=31, fggrn=32, fgyel=33, fgblu=34};
enum bg {bgblk=40, bgred=41, bggrn=42, bgyel=43, bgblu=44};

int main()
{
 clrscn;
 poscur(5,30);
 printf("\033[%d;%d;%dmHi there", bld, fgred, bggrn);
 deftxt;
 poscur(6,32);
 printf("\033[%d;%d;%dmHi there", dim, fgred, bgyel);
 deftxt;
 poscur(7, 34);
 printf("\033[%d;%d;%dmHi there", bld, fggrn, bgblu);
 deftxt;
 poscur(8, 36);
 printf("\033[%d;%d;%dmHi there", dim, fggrn, bgred);
 deftxt;
 printf("\n");
 
}
