//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main()
{
   int n,sum=0,remain; 
   printf("Enter a number :");
   scanf("%d", &n);
   
   while(n>0){
       remain=n%10;
       sum+=remain;
       n/=10;
   }
   printf("Sum of the digits of the number is %d", sum);

    return 0;
}
