//Shift all nos. by given n positions within an array of 10 elements either on left side or right side. Pad the remaining position with 0.
#include <stdio.h>

int main() {
    int a[10], i, n, dir;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d", &a[i]);

    printf("Enter number of positions to shift: ");
    scanf("%d", &n);

    printf("Enter direction (1 = Left, 2 = Right): ");
    scanf("%d", &dir);

    int result[10];

    if(dir == 1) {   // LEFT SHIFT
        for(i = 0; i < 10; i++) {
            if(i + n < 10)
                result[i] = a[i + n];
            else
                result[i] = 0;
        }
    }
    else {           // RIGHT SHIFT
        for(i = 9; i >= 0; i--) {
            if(i - n >= 0)
                result[i] = a[i - n];
            else
                result[i] = 0;
        }
    }

    printf("\nShifted Array:\n");
    for(i=0;i<10;i++)
        printf("%d ", result[i]);

    return 0;
}







