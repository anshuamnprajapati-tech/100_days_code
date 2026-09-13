/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int p;
    printf("Enter the percentage :");
    scanf("%d", &p);
    
    if(p>=90 && p<=100){
        printf("Grade A");
    }
    else if (p>=80 && p<=89){
        printf("Grade B");
    }
    else if(p>=70 && p<=79){
        printf("Grade C");
    }
    else if(p>=60 && p<=69){
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }

    return 0;
}
