//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
{
   int n;
   printf("Enter a number :");
   scanf("%d", &n);
   double sum=0.0;
   for(int i=1; i<=n; i++){
       double numerator = (2*i)-1;
       double denominator = 2*i;
       sum+= (double)numerator/denominator;
   }
   printf("Sum of the series is %f", sum);

    return 0;
}
