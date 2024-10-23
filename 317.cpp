#include <stdio.h>

int main() 
{
	float number,balance,charges,credits,limits,NB;
	while(1)
	{
    	printf("Enter account number (-1 to end): ");
    	scanf("%f",&number);
		if(number== -1)
			break;
   		printf("Enter beginning balance: ");
		scanf("%f",&balance);
   		printf("Enter tutal charges: ");
    	scanf("%f",&charges);
    	printf("Enter tutal credits: ");
    	scanf("%f",&credits);
    	printf("Enter credit limits: ");
    	scanf("%f",&limits);
    	
		NB=balance+charges-credits;
		
		if(NB>limits)
		{
			printf("Account:\t%.f",number);
    		printf("\nCredit limits:\t%.2f ",limits);
    		printf("\nBalance:\t%.2f",balance);
			printf("\nCredit Limits Exceeded");	
		}
		
    	printf("\n\n");
	}
}


