//15. Delete a value from the first position
#include <stdio.h>

int main(){
    int a[10], i;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);

    for(i=0;i<9;i++)
        a[i] = a[i+1];

    printf("\nArray after deleting first element:\n");
    for(i=0;i<9;i++)
        printf("%d ", a[i]);

    return 0;
}
