// Convert dollar into pound where 1$ = 48 Rs and 1 pound = 70 Rs
#include<stdio.h>
int main()
{float dollars, rupees, pounds;

printf("Enter amount in Dollars: ");
scanf("%f", &dollars);

rupees = dollars * 48;
pounds = rupees/70;

printf("%.2f Dollars = %.2f Rupees\n", dollars, rupees);
printf("%.2f Dollars = %.2f Pounds\n", dollars, pounds);

return 0;

}
