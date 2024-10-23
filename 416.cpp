#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    //(A)
    printf("(A)\n");
	for(int i=0;i<10;i++)
    {
    	for(int j=0;j<=i;j++)
			printf("*");
		printf("\n");		
	}
	printf("\n");
	
	//(B)
	printf("(B)\n");
	for(int i=10;i>0;i--)
    {
    	for(int j=1;j<=i;j++)			
			printf("*");
		printf("\n");		
	}
	printf("\n");
	
	//(C)
	printf("(C)\n");
	for(int i=0;i<10;i++)
    {
    	for(int j=1;j<=i;j++)			
			printf(" ");
		for(int x=1;x<=10-i;x++)			
			printf("*");
		printf("\n");		
	}
	printf("\n");
	
	//(D)
	printf("(D)\n");
	for(int i=10;i>0;i--)
    {
    	for(int j=1;j<=i;j++)			
			printf(" ");
		for(int x=1;x<=10-i;x++)			
			printf("*");
		printf("\n");		
	}
	printf("\n");
    system("pause");
    return 0;
}
