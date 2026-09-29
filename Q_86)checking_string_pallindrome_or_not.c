//Q86: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str2[100];
    printf("Enter the string :");
    fgets(str, 100, stdin);
    
    
        size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    strcpy(str2,str);
    
    
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
    
    if(strcmp(str2,str)==0){
        printf("String is pallindrome");
    }
    else {
        printf("String is not pallindrome");
    }

    return 0;
}
