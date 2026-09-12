/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int r;
   printf("Enter the radius of circle :");
   scanf("%d", &r);
   
   double circum = 2*3.14*r;
   double area = 3.14*r*r;
   printf("Circumference of circle is %lf\n", circum);
   printf("Area of circke is %lf", area);

    return 0;
}
