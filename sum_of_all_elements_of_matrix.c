/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matrix[3][3],sum=0; 
    printf("Enter the elements :");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("matrix[%d][%d] :", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        printf("\n");
        for(int j=0; j<3; j++){
            printf("\t %d",matrix[i][j] );
        }
    }
    printf("\n");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum+=matrix[i][j];
        }
    }
    printf("Sum of all elements of matrix is : %d", sum);
    

    return 0;
}