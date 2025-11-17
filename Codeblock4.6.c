//compare two strings lexicographically and print which one is grater or lower or same
#include <stdio.h>
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    int result = strcmp(str1, str2);

    if(result == 0)
        printf("Both strings are the same.\n");
    else if (result > 0)
        printf("\"%s\" is greater\n", str1, str2);
    else
        printf("\"%s\" is smaller\n", str1, str2);

    return 0;
}
