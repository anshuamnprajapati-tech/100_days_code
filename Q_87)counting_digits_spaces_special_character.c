//Q87: Count spaces, digits, and special characters in a string.


#include <stdio.h>

int main()
{
    int digit=0, space=0, spcchar=0;
    char str[100];
    fgets(str, 100, stdin);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' ||
        str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9'){
            digit++;
        }
        else if(str[i]==' '){
            space++;
        }
        else if(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' ||
        str[i]=='%' || str[i]=='^' || str[i]=='&' || str[i]=='*'){
            spcchar++;
        }
    }
    printf("Digits = %d\n", digit);
    printf("Spaces = %d\n", space);
    printf("Special characters = %d", spcchar);

    return 0;
}
