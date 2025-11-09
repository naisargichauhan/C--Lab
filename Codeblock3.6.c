//Print your name n times
#include<stdio.h>
int main()
{
    int n, i ;
    char name[50];
    printf("How many times would you like your name to be printed:");
    scanf("%d", &n);

    printf("Enter your name:");
    scanf("%s", &name);

    for (i = 1; i <= n; i++)
    {
        printf("%d. %s\n", i, name);
    }

    return 0;
}
