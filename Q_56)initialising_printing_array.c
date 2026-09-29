// Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>

int main()
{
   int n,array[n];
   printf("Enter the number of elements ");
   scanf("%d", &n);
   
   printf("\nEnter the elements :\n");
   for(int i=0; i<n; i++){
   
   printf("array[%d]:", i);
   scanf("%d", &array[i]);
   }
   printf("\n");
   for(int i=0; i<n; i++){
       printf("array[%d] = %d\n", i,array[i]);
   }
    return 0;
}
