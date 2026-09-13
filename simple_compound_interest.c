/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
