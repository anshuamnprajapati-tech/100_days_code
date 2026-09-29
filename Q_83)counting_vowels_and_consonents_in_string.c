//Q83: Count vowels and consonants in a string.
#include <stdio.h>
#include <string.h>

int main()
{
    int vowel=0, consonent=0;
    char str[100];
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
        str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowel++;
        }
        else {
            consonent++;
        }
    }
    printf("Number of vowels in a string is %d", vowel);
    printf("\nNumber of consonents in a string are %d", consonent);

    return 0;
}