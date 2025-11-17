//Write a function to swap two integers using call by valuse.Show that  the original values are not changes
#include<stdio.h>
int swap(int a, int b)
{
    int temp;
    a=temp;
    a=b;
    temp=b;

    return 1;
}
int main()
{   int q,r;
    printf("Enter first number");
    scanf("%d",&q);
    printf("Enetr second number");
    scanf("%d", &r);

    swap(q,r);

    printf("The sawped number aare%d and %d", q,r);
    return 0;
}
