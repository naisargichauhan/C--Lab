//Reverse the element of 5 arrary
#include <stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray elements in reverse order:\n");
    for(i=4;i>=0;i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
