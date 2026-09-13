/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,array[n];
   printf("Enter the number of elements ");
   scanf("%d", &n);
   
   printf("\nEnter the elements :\n");
   for(int i=0; i<n; i++){
   
   printf("array[%d]:", i);
   scanf("%d", &array[i]);
   }
   printf("\n");
   for(int i=0; i<n; i++){
       printf("array[%d] = %d\n", i,array[i]);
   }
    return 0;
}
