/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
int sec,hour,min,remain,re;
printf("Enter seconds :");
scanf("%d", &sec);

hour=sec/3600;
printf("%d:", hour);
remain=sec%3600;

min=remain/60;
printf("%d:", min);

re=remain%60;
printf("%d",re);
    return 0;
}
