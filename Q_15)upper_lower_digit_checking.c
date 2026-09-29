//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    
    if(isupper(ch)){
        printf("%c character is upper case ", ch);
        }
       else if(islower(ch)){
            printf("%c is lower case", ch);
        }
       else if(isdigit(ch)){
            printf("%c is a digit", ch);
        }
        else{
            printf("%c is special character", ch);
        }

    return 0;
}
