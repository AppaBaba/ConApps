#include<stdio.h>

#define colorred "\033[;1;31m"
#define colorend "\033[0m"

int main()
{
 printf("%sHi there%s\n", colorred, colorend);
}
