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
    if(n==0 || n<0){
        printf("Enter a positive number");
    }
    for(int i=1; i<=n; i++)
    {
        if(n%i==0){
            printf("%d ", i);
        }
    }

    return 0;
}
