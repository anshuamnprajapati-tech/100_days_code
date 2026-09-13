/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    if (n>0){
        printf("Number is positive");
    }
    else if (n<0){
        printf("Number is negative");
    }
    else {
        printf("Number is zero");
    }

    return 0;
}
