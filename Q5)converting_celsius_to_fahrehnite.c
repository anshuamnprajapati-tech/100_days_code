Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>

int main()
{
    double c;
    printf("Enter the temprature in celsius :");
    scanf("%lf", &c);
    double f = ((c*9)/5)+32;
    printf("Temprature in fahrenheit is %lf", f);

    return 0;
}
