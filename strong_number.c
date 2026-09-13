/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0,remain,product=1,original;
    printf("Enter a number :");
    scanf("%d",&n);
    original=n;
    while(n>0){
        remain=n%10;
        for(int i=1; i<=remain; i++){
            product*=i;
        }
        sum+=product;
        product=1;
        n/=10;
    }
    if(original==sum){
        printf("Strong number");
    }
    else {
        printf("Not a strong number");
    }

    return 0;
}
