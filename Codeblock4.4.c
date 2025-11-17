//Convert the string to a to UPPER case
#include<stdio.h>
int main()
{
    char str[20];
    int i=0;

    printf("Enter your str:");
    gets(str);

    for(i=0; str[i] != '\0';i++)
       {

        if(isupper(str[i]))
        str[i]=tolower(str[i]);
        else
            str[i]=toupper(str[i]);
       }
    printf("the string is:%s\n", str);
    return 0;
}
