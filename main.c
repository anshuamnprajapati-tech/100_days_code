/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a :"); //take two numbers input from user
    scanf("%d", &a);
    
    printf("Enter b :");
    scanf("%d", &b);
    
    int sum = a+b;
    printf("Sum of numbers is = %d", sum);

    return 0;
}
