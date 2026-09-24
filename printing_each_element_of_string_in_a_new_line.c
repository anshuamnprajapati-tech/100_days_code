//Q82: Print each character of a string on a new line.

#include <stdio.h>
int main()
{
    char str[] = "Hello,World!";
    for(int i=0; i<13; i++){
        printf("%c\n", str[i]);
    }
    return 0;
}