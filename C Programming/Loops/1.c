#include<stdio.h>
int main()
{
	int i;
	printf("\nFor loop : ");
	for(i=11;i<=15;i++);
	{
		printf("\nTops Technologies");//5
	}

	printf("\n");
	for(i=1061;i>1062;i--)
	{
		printf("\nTops Technologies");//5
	}
	
	printf("\n");
	for(i=60;i<=50;i=i+10)
	{
		printf("\nTops Technologies");//5
	}
	
	printf("\n");
	for(i=35;i<=32;i=i*2)
	{
		printf("\nTops Technologies");//5
	}
	
	printf("\nWhile loop :");
	i=1;
	while(i<=5)
	{
		printf("\nTops Technologies");//5
		i++;//6
	}
	
	printf("\ndo while loop :");
	i=0;
	do
	{
		printf("\nTops Technologies");//5
		i++;//11
	}while(i<=4);
	return 0;
}
