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
4️⃣ Store Records in File (Openable in Excel)
c
Copy code
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
✅ Summary Table

Concept	Program
Structure array	Students, Bank, Cricketers
Call by reference	Bank updates
Sorting	Cricketers by average
File handling basics	Reading, writing, counting
Excel-compatible output	Using .csv

Would you like me to create a single combined C file (like unit4_structures_files.c) containing all programs properly divided with comments and menu options (for easy submission)?







You said:
how many questions have i goven you up until now



ChatGPT said:
You’ve given me a total of 5 full sets (Units) of questions so far — each containing multiple C programming exercises. Here’s the breakdown 👇

🧩 Unit 1 – Basic Programs (Using if condition)
➡️ 6 questions
(e.g., largest/smallest, net salary, divisibility, net sales, grades, etc.)

🔁 Unit 2 – Loops
➡️ 34 questions
(e.g., printing series, factorial, palindrome, Armstrong, Fibonacci, primes, etc.)

🧮 Unit 3 – Arrays
➡️ 19 questions
(e.g., accept, print, sort, min/max, insert/delete/search elements, etc.)

🔤 Unit 4 – Strings, Pointers & Arrays of Pointers
➡️ 17 questions
(12 string-related + 5 pointer/array programs)

🧱 Unit 5 – Functions & Recursion
➡️ 8 questions
(e.g., power, leap year, factorial, swap, calculator, recursion, etc.)

🗂️ Unit 6 – Structures, Unions & File Handling
➡️ 8 questions total
(4 structure-based + 4 file-handling programs)

✅ Grand Total So Far:
6 + 34 + 19 + 17 + 8 + 8 = 92 C programming questions

Would you like me to compile all 92 questions (organized unit-wise) into a single Word or PDF document — formatted cleanly with headings and space for answers/code?








C





