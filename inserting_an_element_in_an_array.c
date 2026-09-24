/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,num,pos;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    int array[n];
    printf("\nEnter the elements :");
    for(int i=0; i<n; i++){
        printf("array[%d]", i);
        scanf("%d", &array[i]);
    }
    printf("Enter the number to be inserted :");
    scanf("%d", &num);
    printf("Enter the position of number to be inserted :");
    scanf("%d", &pos);

    for(int i=n-1; i>=pos; i--)
    {
        array[i+1]=array[i];
    }
        array[pos]=num;
        n++;
    
    printf("Array after the insertion of %d is :",num);
    for(int i=0; i<n; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}
