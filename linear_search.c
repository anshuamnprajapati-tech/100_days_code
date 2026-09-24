//Q61: Search for an element in an array using linear search.


#include <stdio.h>

int main()
{
    int n,num;
    printf("Enter the number of element in an array :");
    scanf("%d", &n);
    int array[n];
    for(int i=0; i<n; i++){
        printf("array[%d] :", i);
        scanf("%d", &array[i]);
    }
    printf("Enter the number to be found in array :");
    scanf("%d", &num);
    for(int i=0; i<n; i++){
        if(array[i]==num){
            printf("Number found array[%d] = %d", i,array[i]);
            break;
        }
        else {
            printf("Number is not present in this array");
            break;
        }
    }
    

    return 0;
}