//Print the sum of the first n n=even and m odd numbers
#include<stdio.h>
int main()
{
    int n, i, sum1, m, sum2 = 0;

    printf("Enter the value of n for even numbers addition: ");
    scanf("%d", &n);

    printf("Enter the value of m for odd numbers addition: ");
    scanf("%d", &m);


    for (i = 0; i <= n; i=i+2)
    {
        sum1 = sum1 + i;
    }

    printf("The sum of the first %d even numbers is: %d\n", n, sum1);

    for (i = 1; i <= m; i=i+2)
    {
        sum2 = sum2 + i;
    }

    printf("The sum of the first %d natural numbers is: %d\n", m, sum1);

    return 0;
}
