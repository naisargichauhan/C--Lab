 #include <stdio.h>

int main()
{{
    int num, temp, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;


    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    printf("Digits of the number are: ");

    while (divisor > 0)
    {
        int digit = num / divisor;
        printf("%d ", digit);
        num = num % divisor;
        divisor = divisor / 10;
    }

    printf("\n");


}

{
    int num, digit, digits[20], i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
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
    return 0;
}
}
