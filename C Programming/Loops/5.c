#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);//4
	for(i=1;i<=num;i++)
	{
		sum = sum + i;
	}
	printf("\nAddition of first %d natural numbers is = %d",num,sum);
	return 0;
}
