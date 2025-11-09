//Find out rhe net sales where net salary = gross salary-discount
#include<stdio.h>
int main()
{
float net, gross, dis;

printf("Gross sales:");
scanf("%f", &gross);

printf("Discount is:");
scanf("%f", &dis);

if(gross>20000)
{
net=gross-dis*0.15;
printf("net salary:%f\n");
}
else if(gross>10000)
{net=gross-dis*0.10;
printf("net salary:%f\n");
}
else
{net=gross-dis*0.05;
printf("net salary:%f\n");
}
return 0;
}
