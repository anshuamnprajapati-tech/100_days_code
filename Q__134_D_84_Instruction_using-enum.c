//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>
enum {
    SUCCESS, FAILURE, TIMEOUT
};

int main()
{
    char ch[100];
    char cho;
    fgets(ch, 100, stdin);
    if(strcmp(ch,"SUCCESS")==0){
        cho=SUCCESS;
    }
    if(strcmp(ch,"FAILURE")==0){
        cho=FAILURE;
    }
    if(strcmp(ch,"TIMEOUT")==0){
        cho=TIMEOUT;
    }
    switch(cho){
        case SUCCESS: printf("Your work has been successfully proccessed");
        break;
        case FAILURE: printf("Your work has failed");
        break;
        case TIMEOUT: printf("Time has run out");
        break;
        default: printf("Invalid choice");
    }

    return 0;
}
