//Print 1st n even numbers
#include <stdio.h>

int main()
{
    int i, n;

    printf("The first even numbers numbers are:");
    scanf("%d", &n);

    for (i = 2; i <=2* n; i=i+2)
    {
        printf("%d\n", i);
    }

    return 0;
}


