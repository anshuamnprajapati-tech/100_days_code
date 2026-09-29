//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main()
{
    int n,product=1;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        product=product*i;
    }
    printf("Factorial of number is %d", product);

    return 0;
}
