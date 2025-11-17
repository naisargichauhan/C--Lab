//Count how many digits are there in a given number and there sum
#include<stdio.h>
int main()
{
    int i, j, sum=0, num, digits[20];
    printf("ENTER A NUMBER:");
    scanf("%d", &num);

    while (num>0)
    {
        digits[i] = num % 10;
        num = num / 10;
        i++;

    }
    printf("Digits of the number are: ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d ", digits[j]);
    }

    printf("\n");


}
