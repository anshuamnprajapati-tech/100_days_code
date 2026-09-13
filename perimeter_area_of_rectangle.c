/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int l,b;
    printf("Enter the length of rectangle :");
    scanf("%d", &l);
    
    printf("Enter breadth of rectangle :");
    scanf("%d", &b);
    
    int per = l+l+b+b;
    int area = l*b;
    
    printf("Perimeter of rectangle is %d\n", per);
    printf("Area of rectangle is %d", area);

    return 0;
}