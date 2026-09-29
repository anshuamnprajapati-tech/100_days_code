//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp;
    int swappedNum;

    printf("Enter an integer: ");
    scanf("%d", &num);


    if (num >= -9 && num <= 9) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    
    lastDigit = num % 10;


    temp = num;
    while (temp >= 10 || temp <= -10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    
    int pow10 = (int)pow(10, digits);

  
    int middle = (num % pow10) / 10;

    
    swappedNum = lastDigit * pow10 + middle * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
