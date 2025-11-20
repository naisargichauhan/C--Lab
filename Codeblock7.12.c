// 12. Insert a new number at the beginning of the array
#include <stdio.h>

int main(){
    int a[11], i, newValue;

    printf("Enter 10 elements:\n");
    for(i=1; i<=10; i++)
        scanf("%d", &a[i]);

    printf("Enter new value to insert at beginning: ");
    scanf("%d", &newValue);

    a[0] = newValue;

    printf("\nArray after insertion:\n");
    for(i=0;i<=10;i++)
        printf("%d ", a[i]);

    return 0;
}
