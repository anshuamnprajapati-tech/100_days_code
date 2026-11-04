//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
enum light{Red, Yellow, Green};

int main()
{
    
    
    enum light l1= Green;
    switch(l1){
        case Red: printf("Stop");
        break;
        case Yellow: printf("Wait");
        break;
        case Green: printf("Go");
        break;
        default: printf("Invalid");
    }

    return 0;
}
