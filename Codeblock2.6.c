//Calculate total, average of marks of three subjects . Give following grades:
//if average >=70,distinction
 //          >=60,first
//           >=50,second
//           >=35,third class
//otherwise fail
#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, total, average;


    printf("Enter marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &sub3);


    total = sub1 + sub2 + sub3;
    average = total / 3;


    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);


    if (average >= 70)
        printf("Grade: Distinction\n");
    else if (average >= 60)
        printf("Grade: First Class\n");
    else if (average >= 50)
        printf("Grade: Second Class\n");
    else if (average >= 35)
        printf("Grade: Third Class\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
