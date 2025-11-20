//16. Delete a value from a particular position
#include <stdio.h>

int main(){
    int a[10], i, pos;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete (0-9): ");
    scanf("%d", &pos);

    for(i=pos; i<9; i++)
        a[i] = a[i+1];

    printf("\nArray after deleting position %d:\n", pos);
    for(i=0;i<9;i++)
        printf("%d ", a[i]);

    return 0;
}
✅ 17. Delete a value from the last position
c
Copy code
#include <stdio.h>

int main(){
    int a[10], i;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);

    printf("\nArray after deleting last element:\n");
    for(i=0;i<9;i++)
        printf("%d ", a[i]);

    return 0;
}
