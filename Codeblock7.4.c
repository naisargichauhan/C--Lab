//Print the minimum number of notes that are required
#include<stdio.h>
int mian()
{
    int amt, notes[] = {500, 200, 100,50, 20,10, 5,2,1}, count, i;
    printf("Enter amount: ");
    scanf("%d", &amt);
    for(i=0; i<9;i++) {
        count = amt / notes[i];
        amt = amt % notes[i];
        if(count>0)
            printf("%d notes of %d\n", count, notes[i]);
    }
    return 0;
}



