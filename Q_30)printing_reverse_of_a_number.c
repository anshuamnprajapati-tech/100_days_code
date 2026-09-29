//Q30: Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    int n, reverse=0, remain;
    printf("Enter a number :");
    scanf("%d", &n);
    while(n!=0){
        remain=n%10;
        reverse = reverse*10+remain;
        n/=10;
    }
    printf("Reverse of a number is %d", reverse);

    return 0;
}
