//10.	Find out frequency of each number in the array (having 10 elements).
#include <stdio.h>
int main() {
    int a[10], freq[100]={0}, i;
    printf("Enter 10 numbers (0–99):\n");
    for(i=0;i<10;i++) {
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }
    printf("Frequency:\n");
    for(i=0;i<100;i++)
        if(freq[i]>0)
            printf("%d occurs %d times\n", i, freq[i]);
    return 0;
}
