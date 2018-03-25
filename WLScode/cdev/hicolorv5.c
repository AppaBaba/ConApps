#include<stdio.h>

#define clrscn printf("\033[2J")
#define poscur(row,col) printf("\033[%d;%dH",row,col)
#define deftxt printf("\033[0m")
enum attr {rst, bld, dim};
enum fg {fgblk=30, fgred=31, fggrn=32};

int main()
{
 clrscn;
 poscur(5,30);
 printf("\033[%d;%dmHi there", bld, fgred);
 deftxt;
 poscur(6,32);
 printf("\033[%d;%dmHi there", dim, fgred);
 deftxt;
 poscur(7, 34);
 printf("\033[%d;%dmHi there", bld, fggrn);
 deftxt;
 poscur(8, 36);
 printf("\033[%d;%dmHi there", dim, fggrn);
 deftxt;
 printf("\n");
 
}
