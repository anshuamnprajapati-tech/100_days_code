//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
enum month{January, February, March, April, May, June, July, August, September, October, November, December};

int main()
{
   
   enum month m1= February;
   switch(m1){
       case January: printf("31");
       break;
       case February: printf("28 or 29");
       break;
       case March: printf("31");
       break;
       case April: printf("30");
       break;
       case May: printf("31");
       break;
       case June: printf("30");
       break;
       case July: printf("31");
       break;
       case August: printf("31");
       break;
       case September: printf("30");
       break;
       case October: printf("31");
       break; 
       case November: printf("30");
       break;
       case December: printf("31");
       break;
       default: printf("Invalid");
   }

    return 0;
}
