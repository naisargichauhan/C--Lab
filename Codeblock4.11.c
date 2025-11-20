// Print reverse string vertically chracter by character
#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    int length=0;
    int i=0;

    printf("Enter the string:");
    gets(str1);

    length= strlen(str1);

    for(i=0;i<length;i++)
    {
        str2[i]=str1[length-i-1];
    }
    str2[i]='\0';

    for (i=0;str2[i]!='\0';i++)
    {
        printf("%c\n",str2[i]);
    }return 0;
}
