//Q68: Delete an element from an array.

#include <stdio.h>

int main()
{
    int n,pos,num;
    printf("Number of elements in array :");
    scanf("%d", &n);
    int array[n];
    printf("enter the elements :");
    for(int i=0; i<n; i++){
        printf("array[%d] =", i);
        scanf("%d", &array[i]);
    }
    printf("enter the position to be deleted= ");
    scanf("%d", &pos);
    for(int i=pos; i<n-1; i++){
        array[i]=array[i+1];
    }
    n--;
        printf("Array after the deletion is  ");
        for(int i=0; i<n; i++){
            printf("%d ", array[i]);
        }

    return 0;
}
