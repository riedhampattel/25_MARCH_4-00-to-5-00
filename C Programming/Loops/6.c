#include<stdio.h>
int main()
{
	int count,num,sum = 0,i;
	printf("\nEnter the count = ");
	scanf("%d",&count);//3
	for(i=1;i<=count;i++)
	{
		printf("\nEnter the number = ");
		scanf("%d",&num);//2
		sum = sum + num;
	}
	printf("\nThe addition is = %d",sum);
	return 0;
}
