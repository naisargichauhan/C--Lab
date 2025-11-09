#include<stdio.h>
int main()
{
int a, b;
int sum =0;
int sub=0;
int mul=0;
int div=0;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
sum= a+b;
printf("The sum of two numbers is:%d\n", sum);
sub = a-b;
printf("The subtraction of the two numbers is:%d\n", sub);
mul=a*b;
printf("The mutliplication of two numbers is:%d\n",mul);
div=a/b;
printf("The division of two numbers is:%d\n", div);
return 0;
}
