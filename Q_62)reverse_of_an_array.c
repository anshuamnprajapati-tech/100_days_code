//Q62: Reverse an array without taking extra space.

#include <stdio.h>
int main() {
    
    int n;
    printf("Enter the number of elemnts :");
    scanf("%d", &n);
    int array[n];
    for(int i=0; i<n; i++){
        printf("array[%d]=", i);
        scanf("%d", &array[i]);
    }
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;

        left++;
        right--;
    }
    printf("\nReversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}