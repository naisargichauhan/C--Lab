//14. Insert a new number at the last position
#include <stdio.h>

int main(){
    int a[11], i, value;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);

    printf("Enter value to insert at last position: ");
    scanf("%d", &value);

    a[10] = value;

    printf("\nArray after insertion:\n");
    for(i=0;i<11;i++)
        printf("%d ", a[i]);

    return 0;
}
