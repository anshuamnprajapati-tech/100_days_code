//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    int cp,sp;
    double lp,pp;
    printf("Enter the cost price :");
    scanf("%d", &cp);
    
    printf("Enter the selling price :");
    scanf("%d", &sp);
    
    if(cp>sp){
        lp=((cp-sp)*100)/cp;
        printf("Loss percentage is %lf", lp);
    }
    else {
        pp=((sp-cp)*100)/cp;
        printf("Profit percentage is %lf", pp);
    }

    return 0;
}
