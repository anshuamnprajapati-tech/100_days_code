//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    int l,b;
    printf("Enter the length of rectangle :");
    scanf("%d", &l);
    
    printf("Enter breadth of rectangle :");
    scanf("%d", &b);
    
    int per = l+l+b+b;
    int area = l*b;
    
    printf("Perimeter of rectangle is %d\n", per);
    printf("Area of rectangle is %d", area);

    return 0;
}
