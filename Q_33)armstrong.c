//Q33: Write a program to check if a number is an Armstrong number.

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
