#include <stdio.h>

int main()
{
float kg, grams;

// Convert kilograms to grams
printf("Enter weight in kilograms: ");
scanf("%f", &kg);

grams = kg * 1000;  // 1 kg = 1000 grams
printf("%.2f kilograms = %.2f grams\n", kg, grams);

// Convert grams to kilograms
printf("Enter weight in grams: ");
scanf("%f", &grams);
kg = grams / 1000;  // 1000 grams = 1 kg
printf("%.2f grams = %.2f kilograms\n", grams, kg);

return 0;
}
