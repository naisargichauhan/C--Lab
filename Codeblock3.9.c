#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("\nNumbers between 1 and 100 divisible by %d are:\n", n);

    for (i = 1; i <= 100; i++)
    {
        if (i % n == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\n\nSum of all numbers divisible by %d = %d\n", n, sum);

    return 0;
}
