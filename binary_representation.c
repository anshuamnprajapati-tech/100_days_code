/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, temp;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    temp = num;

    // Convert decimal to binary by placing remainders in correct positions
    while (temp > 0) {
        int remainder = temp % 2;
        binary += remainder * place; // Place remainder at the current decimal position
        place *= 10;                 // Move to the next positional digit (1s, 10s, 100s, etc.)
        temp /= 2;
    }

    printf("Binary representation of %d: %lld\n", num, binary);

    return 0;
}
