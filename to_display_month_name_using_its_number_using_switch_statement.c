/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int ch;
   printf("Enter choice number :");
   scanf("%d", &ch);
   switch(ch){
       case 1: printf("Month name is January\n");
               printf("Number of days are 31");
               break;
       case 2: printf("Month name is februray\n");
               printf("29 days if leap year and if not then 28 days ");
               break;
       case 3: printf("Month name is march\n");
               printf("Number of days is 31");
               break;
       case 4: printf("Month name is april\n");
               printf("Number of days is 30");
               break;
       case 5: printf("Month name is may\n");
               printf("Number of days is 31");
               break;
       case 6: printf("Month name is june\n");
               printf("Number of days is 30");
               break;
       case 7: printf("Month name is july\n");
               printf("Number of days is  31");
               break;
       case 8: printf("Month name is august\n");
               printf("Number of days is 31");
               break;
       case 9: printf("Month name is september\n");
               printf("Number of days id 30");
               break;
       case 10: printf("Month name is october\n");
                printf("Number of days is 31");
                break;
       case 11: printf("Month name is november\n");
                printf("Number of days is 30");
                break;
       case 12: printf("Month name is december\n");
                printf("Number of days is 31");
                break;
       default : printf("Invalid choice");
   }

    return 0;
}
