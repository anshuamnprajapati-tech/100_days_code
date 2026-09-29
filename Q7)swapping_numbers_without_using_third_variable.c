//Q7: Write a program to swap two numbers without using a third variable.


#include <stdio.h>

void swap()
{
    int a,b;
    printf("Enter first number :");
    scanf("%d", &a);
    
    printf("Enter second number :");
    scanf("%d", &b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping a=%d, b=%d\n", a,b);

}
int main()
{
    swap();
    return 0;
}
