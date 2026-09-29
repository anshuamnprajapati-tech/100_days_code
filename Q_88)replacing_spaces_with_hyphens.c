//Q88: Replace spaces with hyphens in a string.

#include <stdio.h>

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            str[i]='-';
        }
    }
    printf("String after replacements is %s", str);

    return 0;
}
