//Q81: Count characters in a string without using built-in length functions.


#include <stdio.h>

int main()
{
    int count=0;
    char str[99]="Hello World!";
    for(int i=0; i<99; i++){
        if(str[i]=='\0'){
            break;
        }
        count++;
    }
    printf("Number of character in a string is %d",count);

    return 0;
}
