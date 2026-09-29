//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
    int pr,r,t,n;
    printf("Enter the principle :");
    scanf("%d", &pr);
    
    printf("Enter the rate :");
    scanf("%d", &r);
    
    printf("Enter the time :");
    scanf("%d", &t);
    
   
    float sp=(pr*r*t)/100.0;
    float cp=pr*pow((100.0+r)/100.0,t)-pr;
    printf("The simple interest is %.2f\n", sp);
    printf("The compound interest is %.2f", cp);
    

    return 0;
}
