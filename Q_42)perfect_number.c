//Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>

int main()
{
    int n,sum=0,original;
    printf("Enter a number :");
    scanf("%d", &n);
    original=n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(original==sum){
        printf("Perfect number");
    }
    else {
        printf("Not a perfect number");
    }

    return 0;
}
