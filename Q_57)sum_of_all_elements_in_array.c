//Q57: Find the sum of array elements.

#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number of elements in array :");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of array :");
    for(int i=0; i<n; i++){
        printf("array[%d] =", i);
        scanf("%d", &array[i]);
    }
    for(int i=0; i<n; i++){
        sum+=array[i];
    }
    printf("Sum of all the elements in array is = %d", sum);

    return 0;
}
