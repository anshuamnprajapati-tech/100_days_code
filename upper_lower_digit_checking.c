/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
