#include<stdio.h>
int main()
{
	int num,flag=1,count=0,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);//100
	for(i=2;i<=num/2;i++)
	{
		count++;
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	printf("\nLoop counter = %d",count);
	if(flag==1)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is a not prime number",num);
	}
	return 0;
}
