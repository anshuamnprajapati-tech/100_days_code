//Q75: Add two matrices.

#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], sum[9][9];
    printf("Enter thew element :");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j]= matrix1[i][j]+matrix2[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("\t %d", sum[i][j]);
        }
    }

    return 0;
}
