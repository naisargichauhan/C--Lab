//Accept 10 values in an array and print the 4th, 7th, and 9th value
#include<stdio.h>
int main()
{
    int arr[10];
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("Elements:%d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The 4th element is:%d\n", arr[3]);
    printf("The 7th element is:%d\n", arr[6]);
    printf("The 9th element is:%d\n", arr[8]);
    return 0;
}
