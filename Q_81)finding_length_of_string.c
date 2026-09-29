//Q81: Count characters in a string without using built-in length functions.


#include <stdio.h>

int main()
{
    int count=0;
    char str[100];
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    printf("Number of character in a string is %d",count);

    return 0;
}
