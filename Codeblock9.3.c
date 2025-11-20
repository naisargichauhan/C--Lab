//3.	Read a content of the file line by line
#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("lines.txt", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    printf("\nFile Content:\n");
    while (fgets(line, sizeof(line), fp))
        printf("%s", line);

    fclose(fp);
    return 0;
}
