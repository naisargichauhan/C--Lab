//	A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match.
//Create an array of structure to hold records of 10 such cricketer and store some data in it. Write a program to arrange them in ascending order by average runs.
#include <stdio.h>
struct Cricketer {
    char name[50];
    int age;
    int matches;
    float avg;
};

int main() {
    struct Cricketer c[10], temp;
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("\nEnter details of cricketer %d:\n", i + 1);
        printf("Name: "); scanf("%s", c[i].name);
        printf("Age: "); scanf("%d", &c[i].age);
        printf("Matches: "); scanf("%d", &c[i].matches);
        printf("Average runs: "); scanf("%f", &c[i].avg);
    }

    // Sorting by average
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (c[i].avg > c[j].avg) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nCricketers arranged by ascending average runs:\n");
    for (i = 0; i < 10; i++)
        printf("%s\t%.2f\n", c[i].name, c[i].avg);

    return 0;
}
