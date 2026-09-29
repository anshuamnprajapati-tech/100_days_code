//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

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
