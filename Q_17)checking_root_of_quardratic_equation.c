//Q17: Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>

int main()
{
    int q,x,a,b,c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    printf("Enter the value of c :");
    scanf("%d", &c);
    printf("Input value of x :");
    scanf("%d", &x);
    q= a*(x*x)-(b*x)+c;
    if(q==0){
        printf("%d is root of equation", x);
    }
    else {
        printf("%d is not a root of this equation", x);
    }

    return 0;
}

