//Any year is entered in the keyboard , write a program to determine weather it is a leap year or not
#include <stdio.h>

int isLeap(int year) {
    if((year%400==0) ||(year%4==0&&year%100!=0))
        return 1;
    else
        return 0;
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(isLeap(year))
        printf("%d is a Leap Year", year);
    else
        printf("%d is NOT a Leap Year", year);
    return 0;
}
