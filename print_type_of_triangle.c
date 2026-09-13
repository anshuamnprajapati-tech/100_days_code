/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first side of triangle :");
    scanf("%d", &a);
    
    printf("Enter second side of triangle :");
    scanf("%d", &b);
    
    printf("Enter the third side of triangle :");
    scanf("%d", &c);
    
    if(a==b && b==c){
        printf("Equilateral trinagle");
    }
    else if(a==b && b!=c || a!=b && b==c || a==c && b!=a){
        printf("Isosceles triangle");
    }
    else {
        printf("Scalen triangle");
    }

    return 0;
}