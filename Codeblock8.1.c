//1.	Create a structure to specify data on students given below.  Roll number, Name, Course Name, Major and Minor Subjects.
//Assume that there are 10 students.
	//a) The function should print name of all students.
	//b) Print the data of a student whose roll number is given.

#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    char course[50];
    char major[30];
    char minor[30];
};

void printAll(struct Student s[], int n) {
    printf("\nList of Students:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", s[i].name);
}

void printByRoll(struct Student s[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (s[i].roll_no == roll) {
            printf("\nRoll No: %d\nName: %s\nCourse: %s\nMajor: %s\nMinor: %s\n",
                   s[i].roll_no, s[i].name, s[i].course, s[i].major, s[i].minor);
            return;
        }
    }
    printf("Student with roll no %d not found.\n", roll);
}

int main() {
    struct Student s[10];
    int i, roll;

    for (i = 0; i < 10; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll No: "); scanf("%d", &s[i].roll_no);
        printf("Name: "); scanf("%s", s[i].name);
        printf("Course: "); scanf("%s", s[i].course);
        printf("Major: "); scanf("%s", s[i].major);
        printf("Minor: "); scanf("%s", s[i].minor);
    }

    printAll(s, 10);

    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);
    printByRoll(s, 10, roll);

    return 0;
}

