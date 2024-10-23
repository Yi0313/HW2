#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//¤W¥b 
	for(int i=1;i<=5;i++)
    {
    	for(int j=i;j<5;j++)			
			printf(" ");
		for(int x=1;x<=(2*i-1);x++)			
			printf("*");
		printf("\n");		
	}
	//¤U¥b 
	for(int i=4;i>=1;i--)
    {
    	for(int j=5;j>i;j--)			
			printf(" ");
		for(int x=1;x<=(2*i-1);x++)			
			printf("*");
		printf("\n");		
	}
	
    system("pause");
    return 0;
}
