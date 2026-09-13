/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number of elements in array :");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of array :");
    for(int i=0; i<n; i++){
        printf("array[%d] =", i);
        scanf("%d", &array[i]);
    }
    for(int i=0; i<n; i++){
        sum+=array[i];
    }
    printf("Sum of all the elements in array is = %d", sum);

    return 0;
}
