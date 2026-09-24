//Q77: Check if the elements on the diagonal of a matrix are distinct.


#include <stdio.h>

int main()
{
  int sum=0,n;
   int i;
   int j;
   printf("Enter the number of rows and column number  :");
   scanf("%d", &n);
   
   
   int matrix[n][n];
   
   printf("enter the elements :");
   for( i=0; i<n; i++){
       for(j=0; j<n; j++){
           printf("matrix[%d][%d] :", i,j);
           scanf("%d", &matrix[i][j]);
       }
   }
   
   for( i=0; i<n; i++){
       printf("\n");
       for(int j=0; j<n; j++){
           printf("\t %d", matrix[i][j]);
       }
   }
   printf("\n");
   
   if(matrix[0][0]!=matrix[1][1] && matrix[1][1]!=matrix[2][2] && matrix[0][0]!=matrix[2][2])
   {
       printf("Diagonal elements are distinct");
   }
   else {
       printf("Either two or three diagonal elements are same ");
   }
    return 0;
}
