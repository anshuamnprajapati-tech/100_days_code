/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b,c;
   printf("Enter first number :");
   scanf("%d", &a);
   
   printf("Enter second number :");
   scanf("%d", &b);
   
   printf("Enter third number :");
   scanf("%d", &c);
   
   if(a>b && a>c && a!=b && a!= c && b!=c){
       printf("Largest number is %d", a);
   }
   else if (b>a && b>c && a!=b && a!=c && b!=c){
       printf("Largest number is %d", b);
   }
   else if (c>a && c>b && a!=b && a!=c && b!=c) {
       printf("Largest number is %d", c);
   }
   else {
       printf("Either of two or three are equal");
   }

    return 0;
}
