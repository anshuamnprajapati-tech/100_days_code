//Q31: Write a program to take a number as input and print its equivalent binary representation.

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
