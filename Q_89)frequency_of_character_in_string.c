//Q89: Count frequency of a given character in a string.


#include <stdio.h>

int main()
{
    int count=0;
    char str[100];
    fgets(str, 100, stdin);
    char freq;
    printf("Enter the character whose frequency is to be found :");
    scanf("%c", &freq);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==freq){
            count++;
        }
    }
    printf("Frequency of character in the string is %d", count);

    return 0;
}
