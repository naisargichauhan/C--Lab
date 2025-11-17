//Find out the factors of a given number
#include<stdio.h>
int main()
{
    int num, i=0;

    printf("Enter a number:");
    scanf("%d", &num);

    printf("The factors of %d are:", num);

    for(i = 1;i<=num;i++)
    {
        if (num % i ==0)
        {
            printf("%d", i);
        }

    }

printf("\n\nThe factors of %d (using while loop) are: ", num);
    i = 1;
    while (i <= num)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");
    return 0;

}





