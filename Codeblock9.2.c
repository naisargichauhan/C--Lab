//2.	Instead of characters, accept one line at a time from the user and write it into the fil
#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("lines.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        return 0;
    }

    printf("Enter lines (type END to stop):\n");
    while (1) {
        gets(line);
        if (strcmp(line, "END") == 0)
            break;
        fputs(line, fp);
        fputs("\n", fp);
    }

    fclose(fp);
    printf("Data written successfully.\n");
    return 0;
}
