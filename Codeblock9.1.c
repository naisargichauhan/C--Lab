//1.	Read a file and count no.of lines, words, characters, spaces, in it.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ')
            spaces++;
        if (ch == '\n')
            lines++;
        if (ch == ' ' || ch == '\n')
            words++;
    }

    fclose(fp);

    printf("Lines: %d\nWords: %d\nCharacters: %d\nSpaces: %d\n", lines, words, chars, spaces);
    return 0;
}
