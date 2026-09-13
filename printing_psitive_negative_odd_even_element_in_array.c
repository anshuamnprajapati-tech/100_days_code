/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, positive=0,negative=0,odd=0,even=0;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements :");
    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    
    for(int i=0; i<n; i++){
        if(array[i]>0){
            positive++;
        }
       if(array[i]<0){
          negative++;
      }
       if(array[i]%2==0){
          even++;
      } 
       if(array[i]%2!=0){
          odd++;
      }
    }
    printf("Number of positive integer is %d\n", positive);
    printf("Number of negative integer is %d\n", negative);
    printf("number of even interger is %d\n", even);
    printf("Number of odd integer is %d\n", odd);

    return 0;
}
