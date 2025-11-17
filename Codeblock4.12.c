//Count how many vowels are there in a given string
#include<stdio.h>
int main()
{
    char str[20];
    int j=0;
    int a=0;
    int e=0;
    int i=0;
    int o=0;
    int u=0;

    printf("Enter the string:");
    gets(str);

    for (j=0;str[j]!='\0';j++)
    {
        char chr =tolower(str[j]);
        if(ch == 'a')
            a++;
        else if (ch == 'e')
            e++;
        else if (ch == 'i')
            i_count++;
        else if (ch == 'o')
            o++;
        else if (ch == 'u')
            u++;
    }
    printf("Frequesncy of a%d%d%d%d%d\n", a,e,i,o,u);
    return 0;
}
