//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
enum choice{
    ADD,SUB,MULT,DIVI,MOD
    
};

int main()
{
    int a,b;
    char ch;
    char choice;
    printf("Enter the numbers:");
    scanf("%d",&a);
    scanf("%d", &b);
    printf("Enter the operation:");
    scanf(" %c", &ch);
    if(ch=='+'){
        choice = ADD;
    }
    if(ch=='-'){
        choice= SUB;
    }
    if(ch=='*'){
        choice= MULT;
    }
    if(ch=='/'){
        choice = DIVI;
    }
    if(ch=='%'){
        choice = MOD;
    }
    switch(choice){
        case ADD: printf("%d", a+b);
        break;
        case SUB: printf("%d", a-b);
        break;
        case MULT: printf("%d", a*b);
        break;
        case DIVI: if(b==0){
            printf("Invalid");
        }
        else {
            printf("%.2f", a/b);
        }
        break;
        case MOD: printf("%d", a%b);
        break;
        default: printf("Invalid");
    }
    return 0;
}
