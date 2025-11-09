//Calculate area, perimeter of square, rectangle, circle and traingle.
#include <stdio.h>
#define PI 3.1416

int main()
{
    int choice;
    float side, length, breadth, radius, base, height, area, perimeter;

    printf("Geometry Calculator\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("4. Triangle\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // Square
        printf("Enter the side of the square: ");
        scanf("%f", &side);
        area = side * side;
        perimeter = 4 * side;
        printf("Area of Square = %.2f\n", area);
        printf("Perimeter of Square = %.2f\n", perimeter);
    }
    else if (choice == 2)
    {
        // Rectangle
        printf("Enter the length and breadth of the rectangle: ");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        perimeter = 2 * (length + breadth);
        printf("Area of Rectangle = %.2f\n", area);
        printf("Perimeter of Rectangle = %.2f\n", perimeter);
    }
    else if (choice == 3)
    {
        // Circle
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = PI * radius * radius;
        perimeter = 2 * PI * radius;
        printf("Area of Circle = %.2f\n", area);
        printf("Circumference of Circle = %.2f\n", perimeter);
    }
    else if (choice == 4)
    {
        // Triangle
        float a, b, c;
        printf("Enter the base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Enter the three sides of the triangle: ");
        scanf("%f %f %f", &a, &b, &c);
        perimeter = a + b + c;
        printf("Area of Triangle = %.2f\n", area);
        printf("Perimeter of Triangle = %.2f\n", perimeter);
    }
    else
    {
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}
