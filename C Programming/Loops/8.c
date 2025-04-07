#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);//3
	for(i=num;i>=1;i--)
	{
		fact = fact * i;
	}
	printf("\nFactorial of %d is %d",num,fact);
	return 0;
}
