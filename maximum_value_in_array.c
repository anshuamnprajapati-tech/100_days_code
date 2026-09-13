/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,max;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements :");
    for(int i=0; i<n; i++){
        printf("array[%d]", i);
        scanf("%d", &array[i]);
    }
    max=array[0];
    for(int i=1; i<n; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("Maximum value in array is %d", max);

    return 0;
}
