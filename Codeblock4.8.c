//8.	Check whether a string is a Palindrome String or not.
#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    int i=0;
    int length=0;

     printf("Enter the string to be reverserd: ");
    gets(str1);

     length= strlen(str1);

     for(i=0;i<length;i++)
     {
         str2[i]=str1[length-i-1];

     }
     str2[i] ='\0';

   int result = strcmp(str1, str2);

    if(result == 0)
        printf("Both strings are palindrome\n");
    else
        printf("they are not palindrome ");
    return 0;
}
