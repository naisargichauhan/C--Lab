//Copy one string to another one
#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];

    printf("Enter a string:");
    gets(str1);

    strcpy(str2, str1);

    printf("Copied string is:%s\n", str2);
    return 0;
}
