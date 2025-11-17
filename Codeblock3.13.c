// Find out weather a given number is a palindrome or not
#include <stdio.h>

int isPalindrome(int num)
{
    int original =num;
    int reversed =0;
    while (num != 0)
    {
        reversed =reversed * 10 + num % 10;
        num =num / 10;
    }

    if (original ==reversed)
        return 1;
    else
        return 0; }

int main()
{
    int num;

    printf("Enter a number to check whether it is a palindrome or not: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("This number is a palindrome.\n");
    else
        printf("This number is not a palindrome.\n");

    return 0;
}
