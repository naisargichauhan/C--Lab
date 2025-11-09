#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the value of the first number: ");
    scanf("%d", &a);

    printf("Enter the value of the second number: ");
    scanf("%d", &b);

    printf("Enter the value of the third number: ");
    scanf("%d", &c);


    if (a==b && b==c)
        printf("All the numbers are equal");

    else if (b > a && b> c)
        printf("The greatest number is: %d\n", b);
    else if(a>b && a>c)
        printf("The greatest number is: %d\n", a);
    else
        printf("The greatest number is:%d\n", c);
    return 0;
}
