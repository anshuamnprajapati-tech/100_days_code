/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    char ch;
    printf("Enter first number :");
    scanf("%d", &a);
    
    printf("Enter second number :");
    scanf("%d", &b);
    
    printf("Enter choice :");
    scanf(" %c", &ch);
    
    switch (ch){
        case '+' : printf("Sum of two digits is %d", a+b);
        break;
        case '-': printf("Difference of two digit is %d", a-b);
        break;
        case '/' : if(b==0){
            printf("Invalid");
        }
        else {
            printf("Division of two number is %.3f",(float) a/b);
        }
        break;
        case '*' : printf("Multiplication of two numbers is %d", a*b);
        break;
        default : printf("Invalid choice");
    }

    return 0;
}