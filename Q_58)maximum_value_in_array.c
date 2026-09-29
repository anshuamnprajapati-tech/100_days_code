//Q58: Find the maximum and minimum element in an array.

#include <stdio.h>

int main()
{
    int n,max,min;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements :");
    for(int i=0; i<n; i++){
        printf("array[%d]", i);
        scanf("%d", &array[i]);
    }
    max=array[0];
    for(int i=0; i<n; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("Maximum value in array is %d\n", max);

    min=array[0];
    for(int i=0; i<n; i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    printf("Minimum value in array is %d", min);

    return 0;
}
