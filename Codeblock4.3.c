//4.	Convert a string to a toggle case. E.g. AbC  aBc
#include <stdio.h>
int main() {
    char str[50];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++) {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    printf("Toggle case: %s", str);
    return 0;
}
