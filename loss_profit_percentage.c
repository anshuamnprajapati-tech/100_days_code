/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
