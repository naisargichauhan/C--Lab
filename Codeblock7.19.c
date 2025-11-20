//19. Search a value within an array
#include <stdio.h>

int main(){
    int a[10], value, i, found = 0;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);

    printf("Enter value to search: ");
    scanf("%d", &value);

    for(i=0;i<10;i++){
        if(a[i] == value){
            printf("Value found at index %d\n", i);
            found = 1;
        }
    }

    if(!found)
        printf("Value not found.\n");

    return 0;
}
