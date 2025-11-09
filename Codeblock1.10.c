//Convert Celcius into Faherenheit and vice versa
int main()
{
float celsius, fahrenheit;
int choice;

printf("Temperature Conversion Program\n");
printf("1. Celsius to Fahrenheit\n");
printf("2. Fahrenheit to Celsius\n");
printf("Enter your choice (1 or 2): ");
scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9 / 5) + 32;  // Formula
        printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;  // Formula
        printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);
    }
    else
    {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
