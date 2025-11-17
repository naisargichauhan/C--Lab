//Accept 5 values and sort the array in ascending or descending order
#include<stdio.h>
int main()
{
    int arr[5];
    int i, j, temp;
    for(i=0;i<5;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d", &arr[i]);
    }


    for(i=0;i<5;i++)
    {
        for(j=i+ 1; j< 5; j++)
        {
            if(arr[i]> arr[j])
            {
                temp=arr[i];
                arr[i]= arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nThe sorted array in ascending order is:\n");
    for(i =0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
