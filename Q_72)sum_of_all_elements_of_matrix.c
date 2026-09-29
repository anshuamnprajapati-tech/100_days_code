//Q72: Find the sum of all elements in a matrix.

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
