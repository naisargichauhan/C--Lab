//Print the number of positive negative and zeros
#include <stdio.h>

int main()
{
    int i, n = 200;
    int num;
    int positive = 0, negative = 0, zero = 0;
    printf("Enter 200 numbers:\n");

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }
    printf("\nTotal positive numbers: %d", positive);
    printf("\nTotal negative numbers: %d", negative);
    printf("\nTotal zeros: %d\n", zero);
    return 0;
}
