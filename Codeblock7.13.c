//Insert a new number at a given position
#include <stdio.h>

int main(){
    int a[11], i, pos, value;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);

    printf("Enter position (0-10): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(i=10; i>pos; i--)
        a[i] = a[i-1];

    a[pos] = value;

    printf("\nArray after insertion:\n");
    for(i=0;i<11;i++)
        printf("%d ", a[i]);

    return 0;
}
