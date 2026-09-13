/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,positive=0, negative=0;
    printf("Enter the number of elements :" );
    scanf("%d", &n);
    int array[n];
    printf("Enter the elments :");
    for(int i=0; i<n; i++){
        printf("array[%d]", i);
        scanf("%d", &array[i]);
    }
    for(int i=0; i<n; i++){
        if(array[i]>0){
            positive++;
        }
        else{
            negative++;}
    }
    printf("Number of positive elements in array is %d\n", positive);
    printf("Number of negative elements in array is %d", negative);

    return 0;
}
