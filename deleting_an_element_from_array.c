/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,pos,num;
    printf("Number of elements in array :");
    scanf("%d", &n);
    int array[n];
    printf("enter the elements :");
    for(int i=0; i<n; i++){
        printf("array[%d] =", i);
        scanf("%d", &array[i]);
    }
    printf("enter the position to be deleted= ");
    scanf("%d", &pos);
    for(int i=pos; i<n-1; i++){
        array[i]=array[i+1];
    }
    n--;
        printf("Array after the deletion is  ");
        for(int i=0; i<n; i++){
            printf("%d ", array[i]);
        }

    return 0;
}
