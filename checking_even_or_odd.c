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
   
   if(n%2==0){
       printf("Number is even");
   }
   else {
       printf("Number is odd");
   }

    return 0;
}
