#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of the first number: ");
    scanf("%d", &a);

    printf("Enter the value of the second number: ");
    scanf("%d", &b);

    if (a > b)
        printf("The greater number is: %d\n", a);
    else if (b > a)
        printf("The greater number is: %d\n", b);
    else
        printf("Both numbers are equal.\n");

    return 0;
}
