//Q78: Find the sum of main diagonal elements for a square matrix.


#include <stdio.h>

int main()
{
   int n, sum=0;
   printf("Enter the number of rows and columns :");
   scanf("%d", &n);
   int matrix[n][n];
   for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           printf("matrix[%d][%d] :", i,j);
           scanf("%d", &matrix[i][j]);
       }
   }
   
   for(int i=0; i<n; i++){
       printf("\n");
       for(int j=0; j<n; j++){
           printf("\t %d", matrix[i][j]);
       }
   }
   printf("\n\n");
   
   for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           if(i==0&&j==0 || i==1&&j==1 || i==2&&j==2){
               sum+=matrix[i][j];
           }
       }
   }
   printf("Sum of all diagonals elements is %d", sum);

    return 0;
}
