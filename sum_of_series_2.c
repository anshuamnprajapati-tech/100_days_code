/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n;
   double sum=0.0;
   printf("Enter a number :");
   scanf("%d", &n);
   for(int i=1; i<=n; i++){
       double numerator =2*i;
       double denominator = 4*i-1;
       sum += (double) numerator/denominator;
   }
   printf("sum is %.5f", sum );

    return 0;
}