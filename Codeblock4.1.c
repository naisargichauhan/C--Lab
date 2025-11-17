//Find the length of a string
#include<stdio.h>
int main()
{
    char str[5];
    int i=0;

    printf("enter a string:");
    gets(str);

    while(str[i]!=0)

    {
    i++;

    }

printf("The length od the given string is :%d\n", i);
return 0;
}
