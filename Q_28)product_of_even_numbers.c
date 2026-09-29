//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main()
{
   int n,product=1,remain;
   printf("Enter a number :");
   scanf("%d", &n);
   while(n>0){
       remain=n%10;
       if(remain%2!=0){
           product*=remain;
       }
       n/=10;
   }
   printf("Product of odd digits is %d", product);

    return 0;
}
