//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

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
