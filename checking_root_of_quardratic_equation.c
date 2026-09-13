/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int q,x;
    printf("Input value of x :");
    scanf("%d", &x);
    q= (x*x)-(5*x)+6;
    if(q==0){
        printf("%d is root of equation", x);
    }
    else {
        printf("%d is not a root of this equation", x);
    }

    return 0;
}
