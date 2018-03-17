#include<stdio.h>

#define fgbred "\033[1;31m"
#define fgbgrn "\033[1;32m"
#define deftxt "\033[0m"

int main()
{
 printf("%sHi there%s\n", fgbred, deftxt);
 printf("%sHi there%s\n", fgbgrn, deftxt);
 
}
