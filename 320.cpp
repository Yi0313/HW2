#include <stdio.h>

int main() 
{
	float hours,rate,Salary;
	while(1)
	{
    	printf("Enter # of hours worked (-1 to end): ");
    	scanf("%f",&hours);
		if(hours== -1)
			break;
   		printf("Enter hourly rate of the worker ($500.00): ");
		scanf("%f",&rate);
   		
   		if(hours<=40)
   			Salary=hours*rate;
   		else
   			Salary=hours*rate+(hours-40)*rate/2;
		printf("Salary is: $%.2f",Salary);
    	printf("\n\n");
	}
}
