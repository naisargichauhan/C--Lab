#include <stdio.h>

int main()
{
    int n, i;
    long long factorial = 1; // Use long long for large results

    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of a negative number is not possible.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
