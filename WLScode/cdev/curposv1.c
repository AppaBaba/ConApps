#include<stdio.h>

#define esc 27
#define clrscn printf("%c[2J", esc)
#define poscur(row,col) printf("%c[%d;%dH",esc,row,col)

int main()
{
 clrscn;
 poscur(5,30);
 printf("Hi there\n");
 poscur(6,32);
 printf("Hi there\n");
}
