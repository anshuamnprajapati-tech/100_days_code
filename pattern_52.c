
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i=1; i<=n; i+=2){
        for(int j=1; j<=n-i; j++){
            printf(" \n");
        }
        for(int j=1; j<=i; j++){
            printf("*\n");
        }
        printf("\n");
    }
    for(int i=n-3; i>=1; i-=2){
        for(int j=1; j<=n-i; j++){
            printf(" \n");
        }
        for(int j=1; j<=i; j++){
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
