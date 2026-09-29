//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int n,sum=0,remain,product=1,original;
    printf("Enter a number :");
    scanf("%d",&n);
    original=n;
    while(n>0){
        remain=n%10;
        for(int i=1; i<=remain; i++){
            product*=i;
        }
        sum+=product;
        product=1;
        n/=10;
    }
    if(original==sum){
        printf("Strong number");
    }
    else {
        printf("Not a strong number");
    }

    return 0;
}
