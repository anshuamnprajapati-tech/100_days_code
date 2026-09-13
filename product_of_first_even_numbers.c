/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,product=1;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            product=product*i;
        }
        
    }
    printf("%d", product);

    return 0;
}
