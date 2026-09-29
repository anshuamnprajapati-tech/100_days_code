//Q80: Multiply two matrices.


#include <stdio.h>

int main() {
    int r1, c1, r2, c2;


    printf("Enter rows and columns for First Matrix (e.g., 2 3): ");
    scanf("%d %d", &r1, &c1);


    printf("Enter rows and columns for Second Matrix (e.g., 3 2): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error: Matrix multiplication not possible. Columns of Matrix A (%d) must equal Rows of Matrix B (%d).\n", c1, r2);
        return 1;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

   
    printf("\nEnter elements of Matrix A (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    printf("\nEnter elements of Matrix B (%dx%d):\n", r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }


    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    
    printf("\nResultant Matrix (%dx%d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
