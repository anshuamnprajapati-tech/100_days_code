/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matrix[3][3], transpose_matrix[5][5];
    printf("Enter the elements :");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<3; i++ ){
        printf("\n");
        for(int j=0; j<3; j++){
            printf("\t %d", matrix[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transpose_matrix[j][i]= matrix[i][j];
        }
    }
    for(int i=0; i<3; i++){
        printf("\n");
        for(int j=0; j<3; j++){
            printf("\t %d", transpose_matrix[i][j]);
        }
    }

    return 0;
}
