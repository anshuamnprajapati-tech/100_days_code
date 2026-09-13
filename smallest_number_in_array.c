/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,small,pos;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    int array[n];//intialize array size after declaring n value
    printf("\nEnter the elements :\n");
    for(int i=0; i<n; i++){
        printf("array[%d] =", i);
        scanf("%d", &array[i]);
    }
    small=array[0]; 
    pos=0;
    for(int i=1; i<n; i++){
        if(array[i]<small){
            small=array[i];
            pos=i;
        }
    }
    printf("Smallest number in array is :%d\n", small);
    printf("Position of smallest number is :%d",pos);
    return 0;
}
