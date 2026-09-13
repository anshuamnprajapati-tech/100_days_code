/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n, sum=0;
   printf("Enter a number :");
   scanf("%d", &n);
   for(int i=1; i<=n; i++){
       if(i%2==0){
           sum+=i;
       }
   }
   printf("Sum of first even natural numbers is %d", sum);

    return 0;
}
