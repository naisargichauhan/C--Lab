//Store records in file opeanablr in excel
#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    char choice;

    fp = fopen("students.csv", "w");
    if (fp == NULL) {
        printf("Error creating file!");
        return 0;
    }

    fprintf(fp, "Roll No,Name\n");

    do {
        printf("Enter Roll No: ");
        scanf("%d", &roll);
        printf("Enter Name: ");
        scanf("%s", name);

        fprintf(fp, "%d,%s\n", roll, name);

        printf("Add another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("Records saved to students.csv (openable in Excel).\n");
    return 0;
}
