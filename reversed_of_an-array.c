#include <stdio.h>
#include <string.h>
int main () {
    char str[]= "Hello, World!";
    strrev(str);
    printf("Reversed string is %s", str);
    return 0;
}