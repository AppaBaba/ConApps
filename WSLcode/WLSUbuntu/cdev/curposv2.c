#include<stdio.h>

#define clrscn printf("\033[2J")
#define poscur(row,col) printf("\033[%d;%dH",row,col)

int main()
{
 clrscn;
 poscur(5,30);
 printf("Hi there\n");
 poscur(6,32);
 printf("Hi there\n");
}
