//Print 1st 10 odd numbers
#include <stdio.h>

int main()
{
    int i, n;

    printf("The first odd numbers numbers are:");
    scanf("%d", &n);

    for (i = 1; i <=2* n; i=i+2)
    {
        printf("%d\n", i);
    }

    return 0;
}

