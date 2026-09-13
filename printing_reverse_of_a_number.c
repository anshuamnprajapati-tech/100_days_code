/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, reverse=0, remain;
    printf("Enter a number :");
    scanf("%d", &n);
    while(n!=0){
        remain=n%10;
        reverse = reverse*10+remain;
        n/=10;
    }
    printf("Reverse of a number is %d", reverse);

    return 0;
}
