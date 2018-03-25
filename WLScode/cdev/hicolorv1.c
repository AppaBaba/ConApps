#include<stdio.h>

#define fgbred "\033[;1;31m"
#define deftxt "\033[0m"

int main()
{
 printf("%sHi there%s\n", fgbred, deftxt);
}
