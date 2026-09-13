/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first number :");
    scanf("%d", &a);
    
    printf("Enter second number :");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("%d\n", a);
    printf("%d", b);
    
    return 0;
}