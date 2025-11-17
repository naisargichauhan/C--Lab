//Question 1:Accept 5 values and print them later
#include<stdio.h>
int main()
{
    int arr[5];
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("the elements in the array are: %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The elements in an array are:\n");
    for (i=0;i<5;i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
