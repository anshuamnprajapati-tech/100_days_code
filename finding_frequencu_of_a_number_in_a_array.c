/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,num,freq=0;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    int array[n];
    printf("\nEnter the elements :");
    for(int i=0; i<n; i++){
        printf("array[%d] =", i);
        scanf("%d", &array[i]);
    }
    printf("Enter number whose frequency is to be find :");
    scanf("%d", &num);
    for(int i=0; i<n; i++){
        if(array[i]==num){
            freq++;
        }
    }
    printf("The frequency of %d in array is %d", num,freq);
    

    return 0;
}
