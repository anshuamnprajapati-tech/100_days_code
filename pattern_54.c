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
    for(int i=1; i<=n; i+=2){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n-2; i>=1; i-=2){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
