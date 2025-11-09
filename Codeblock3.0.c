//Print 1st n natural numbers
#include <stdio.h>

int main()
{
    int i, n;

    printf("The first n natural numbers are:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
