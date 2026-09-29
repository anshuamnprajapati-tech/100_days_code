//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main()
{
    int n,reverse=0,remain,original;
    printf("Enter a number :");
    scanf("%d", &n);
    original=n;
    while(n!=0){
        remain=n%10;
        reverse = reverse*10+remain;
        n/=10;
    }
    if(original==reverse){
        printf("Number is pallindrom");
    }
    else {
        printf("Number is not pallindrom");
    }

    return 0;
}
