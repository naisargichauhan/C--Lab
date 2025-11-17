//Print characters of a string vertically
#include<stdio.h>
int main()
{
    int i=0;
    char str[20];

    printf("Enter your string:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        printf("%c\n",str[i]);
    }return 0;
}
