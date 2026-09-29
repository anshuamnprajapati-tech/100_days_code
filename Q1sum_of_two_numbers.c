//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a :"); //take two numbers input from user
    scanf("%d", &a);
    
    printf("Enter b :");
    scanf("%d", &b);
    
    int sum = a+b;
    printf("Sum of numbers is = %d", sum);

    return 0;
}
