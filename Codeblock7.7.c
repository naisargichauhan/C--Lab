//5 element array into 10 element array skiiping one value each
#include <stdio.h>
int main()
{
    int arr1[5], arr2[10];
    int i,j =0;
    printf("Enter 5 elements for the first array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<10;i++)
    {
        arr2[i]= 0;
    }
    for(i=0;i<5;i++)
    {
        arr2[j] = arr1[i];
        j += 2;
    }
    printf("\nElements of the second array (with skipped positions):\n");
    for(i =0;i<10;i++)
    {
        printf("%d ", arr2[i]);
    }
printf("\n");
    return 0;
}
