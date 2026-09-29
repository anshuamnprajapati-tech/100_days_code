//Q4: Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>

int main()
{
   int r;
   printf("Enter the radius of circle :");
   scanf("%d", &r);
   
   double circum = 2*3.14*r;
   double area = 3.14*r*r;
   printf("Circumference of circle is %lf\n", circum);
   printf("Area of circke is %lf", area);

    return 0;
}
