/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter first number :");
   scanf("%d", &a);
   
   printf("Enter second number :");
   scanf("%d", &b);
   
   int sum = a+b;
   int diff = a-b;
   int mult = a*b;
   printf("Sum of the numbers id %d\n", sum);
   printf("Difference of the numbers is %d\n", diff);
   printf("Multiplication of the numbers is %d\n", mult);
   if(b==0){
       printf("Invalid");
   }
   else {
       int divis = a/b;
       printf("Division of the numbers is %d", divis);
   }

    return 0;
}
