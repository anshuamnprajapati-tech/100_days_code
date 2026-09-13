/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap()
{
    int a,b;
    printf("Enter first number :");
    scanf("%d", &a);
    
    printf("Enter second number :");
    scanf("%d", &b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping a=%d, b=%d\n", a,b);

}
int main()
{
    swap();
    return 0;
}