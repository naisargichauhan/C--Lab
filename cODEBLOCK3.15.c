//Find out how many prime numbers are there between 1 and 500 , print them all and find out their sum
#include<stdio.h>
int main()

{
    int i, j, start, end, count, sum=0, prime=0;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i=start; i<=end; i++)
    {
        if(i<2)
            continue;

        count=o;
        for (j =2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }

        }
        if (count == 0)
        {
            printf("%d ", i);
            sum += i;
            prime++;
        }
    }

    printf("\nTotal prime numbers: %d\n", prime);
    printf("Sum of prime numbers: %d\n", sum);

    return 0;
}
