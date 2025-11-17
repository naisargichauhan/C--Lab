//Convert a string to lower case
#include<stdio.h>
int main()
{
    char str[10];
    int i=0;
    printf("Enter a string:");
    gets(str);

    for(i=0;str[i]!=0;i++)
    {
        str[i]= tolower(str[i]);
    }
    printf("The string in upper case is%s\n:", str);
    return 0;
}

