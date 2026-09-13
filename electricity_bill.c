/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int unit,bill;
   printf("Enter unit of electricity consumed :");
   scanf("%d", &unit);
   
   if(unit<=0){
       printf("No bill");
   }
   else if(unit<=100){
       bill=unit*5;
       printf("Bill is %d", bill);
   }
   else if(unit<=200){
       bill=(100*5)+((unit-100)*7);
       printf("Bill is %d", bill);
   }
   else if(unit<=300){
       bill=(100*5)+(100*7)+((unit-200)*10);
       printf("Bill is %d", bill);
   }
   else {
       bill=(100*5)+(100*7)+(100*10)+((unit-300)*12);
       printf("Bill is %d", bill);
   }

    return 0;
}
