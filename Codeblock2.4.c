//Find out the net salary
#include<stdio.h>
int  main()
{ float net, gross, ded, allow;

printf("Gross Salary is:");
scanf("%f",&gross);

printf("Allowance is:");
scanf("%f", &allow);

printf("Deduction is:");
scanf("%f", &ded);

if(gross>10000)
{
net = gross + allow*0.1 - ded*0.03;
printf("Net salary is:%f\n",net);
}

else if(gross >5000)
{
net = gross+ allow*0.07 -ded*0.02;
printf("Net salary is %f\n", net);
}

else
{net = gross + allow * 0.05 - ded * 0.01;
        printf("Net salary is: %.2f\n", net);
}
return 0;
}
