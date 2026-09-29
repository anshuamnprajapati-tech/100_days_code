//Binary search
#include <stdio.h>

int binarysearch(int arr[], int size, int target){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        
        if(arr[mid]<target){
            low=mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
   int n,i,arr[10],target;
   
   printf("\n Enter the number of elements of an array :");
   scanf("%d", &n);
   
   printf("\n Enter the elements of an array :");
   for(i=0; i<n; i++){
       scanf("%d", &arr[i]);
   }
   printf("Enter the number to be searched :");
   scanf("%d", &target);
   
   int result = binarysearch(arr, n, target);
   if(result!=-1){
       printf("Elements found at index : %d\n", result );
   }
   else {
       printf("Element not found");
   }

    return 0;
}