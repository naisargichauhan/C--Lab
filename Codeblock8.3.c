//3.	Create a structure called student_data containing following information only.
//Roll No., name, marks of physics, maths and Chemistry, and total.
//create one instance from this structure.
//Accept roll no., name, and marks of three subjects from the user and calculate total. Display all the information.

#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float physics, maths, chemistry, total;
};

int main() {
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll_no);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter marks in Physics, Maths, Chemistry: ");
    scanf("%f %f %f", &s.physics, &s.maths, &s.chemistry);

    s.total = s.physics + s.maths + s.chemistry;

    printf("\n--- Student Information ---\n");
    printf("Roll No: %d\nName: %s\nPhysics: %.2f\nMaths: %.2f\nChemistry: %.2f\nTotal: %.2f\n",
           s.roll_no, s.name, s.physics, s.maths, s.chemistry, s.total);

    return 0;
}
