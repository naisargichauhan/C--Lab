//5.	Write a program that uses a function to update both the maximum and minimum values in an array using call by reference
#include<stdio.h>
void findMinMax(int arr[], int n, int *min, int *max) {
    *min = *max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}
int main() {
    int a[5],i,min, max;
    printf("Enter 5 elements: ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    findMinMax(a,5,&min,&max);
    printf("Minimum=%d\nMaximum= %d",min,max);
    return 0;
}
