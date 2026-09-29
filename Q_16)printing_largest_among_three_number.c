//Q16: Write a program to input three numbers and find the largest among them using if–else.

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
