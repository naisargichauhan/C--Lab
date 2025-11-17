//Write a recurssive function to calculate the factorial of a function
#include<stdio.h>
int factorial(int n)
{
    if (n==1 || n==0)
       return 0;
    else
        return n*factorial(n-1);
}
int main()
{
    int a ;
    printf("Enter the number for which factorial is to be calculated\n");
    scanf("%d", &a);
    if(a<0)
    {
        printf("Nehative factorial cannot be calculated\n");
    }
    else
    {
        int result= factorial(a);
        printf("Factorial of %d\n",result);
    }
    return 0;
}
