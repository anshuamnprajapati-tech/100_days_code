//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include <stdio.h>

int main()
{
    
int sec,hour,min,remain,re;
printf("Enter seconds :");
scanf("%d", &sec);

hour=sec/3600;
printf("%d:", hour);
remain=sec%3600;

min=remain/60;
printf("%d:", min);

re=remain%60;
printf("%d",re);
    return 0;
}
