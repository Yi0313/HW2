#include <stdio.h>

int main() 
{
	float dollars,salary;
	while(1)
	{
    	printf("Enter sales in dollars (-1 to end): ");
    	scanf("%f",&dollars);
		if(dollars== -1)
			break;
		
		salary=200+dollars*0.09;
		
   		printf("Salary is: $%.2f",salary);
   		printf("\n\n");
		
	}
}


