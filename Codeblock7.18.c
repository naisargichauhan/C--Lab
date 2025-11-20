//18. Delete a value from the array (value-based delete)
#include <stdio.h>

int main(){
    int a[10], i, value, pos = -1;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);

    printf("Enter value to delete: ");
    scanf("%d", &value);

    for(i=0;i<10;i++){
        if(a[i] == value){
            pos = i;
            break;
        }
    }

    if(pos == -1)
        printf("Value not found.\n");
    else {
        for(i=pos; i<9; i++)
            a[i] = a[i+1];

        printf("\nArray after deletion:\n");
        for(i=0;i<9;i++)
            printf("%d ", a[i]);
    }

    return 0;
}
