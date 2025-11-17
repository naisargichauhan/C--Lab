#include <stdio.h>

int main()
{
    int n, i;
    float num, sum = 0, mean;

    printf("Enter how many numbers you want to calculate: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum = sum + num;
    }

    mean = sum / n;

    printf("\nSum = %.2f", sum);
    printf("\nMean = %.2f\n", mean);

    return 0;
}
