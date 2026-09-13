/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n, original,sum=0,remain;
   printf("Enter a number :");
   scanf("%d", &n);
   original = n;
   do{
       remain=n%10;
       sum=sum+(remain*remain*remain);
       n/=10;
   }while(n!=0);
   if(original==sum)
   {
       printf("Number is armstrong");
   }
   else{
       printf("Number is not armstrong");
   }

    return 0;
}
