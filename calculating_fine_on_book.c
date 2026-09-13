/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int days,fine;
    printf("Enter number if days :");
    scanf("%d", &days);
    
    if(days<=0){
        printf("No fine. Book returned on time");
    }
   else  if(days<=5){
        fine=days*2;
        printf("Fine is %d", fine);
    }
    else if(days<=10){
        fine = (5*2)+((days-5)*4);
        printf("Fine is %d", fine);
    }
    else if(days<=30){
        fine=(5*2)+ (5*4)+((days-10)*6);
        printf("Fine is %d", fine);
    }
    else {
        printf("Your membership has been canceled");
    }

    return 0;
}
