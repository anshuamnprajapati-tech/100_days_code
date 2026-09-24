/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];for(int i=0; i<n; i++){
    
        for(int j=0; j<n; j++) {
            
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
    return 0;
}