//To add the digits and count the number of digits
#include<stdio.h>
int main()
{
    int num, digit, count = 0, sum = 0;

    printf("Enter the number:");
    scanf("%d", &num);

    int temp = num;

    while(temp != 0)
    {
        digit = temp % 10;
        sum =sum + digit;
        count++;
        temp = temp / 10;

    }
    printf("\nNumber of digits = %d", count);
    printf("\nSum of digits = %d\n", sum);

    return 0;


}
