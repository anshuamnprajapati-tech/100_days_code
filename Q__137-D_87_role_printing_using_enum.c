//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>
enum roles{ADMIN, USER, GUEST};

int main()
{
    char ch[100];
    char cho;
    fgets(ch, 100, stdin);
    if(strcmp(ch,"ADMIN\n")==0){
        cho=ADMIN;
    }
    if(strcmp(ch,"USER\n")==0){
        cho=USER;
    }
    if(strcmp(ch,"GUEST\n")==0){
        cho=GUEST;
    }
    switch(cho){
        case ADMIN: printf("Welcome Admin!");
        break;
        case USER: printf("Welcome User!");
        break;
        case GUEST: printf("Welcome guest!");
        break;
        default: printf("Invalid");
    }

    return 0;
}
