//7Obtain transpose of a 4x4 matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column.
#include <stdio.h>
int main() {
    int a[4][4], t[4][4], i, j;
    printf("Enter 4x4 matrix:\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d", &a[i][j]);
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            t[j][i] = a[i][j];
    printf("Transpose:\n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}
