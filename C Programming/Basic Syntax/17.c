#include<stdio.h>
int main()
{
	int num;
	up :
	printf("\nEnter the number = ");
	scanf("%d",&num);
	printf("\nValue stored in num = %d",num);//0
	if(num!=0)
	{
		goto up;
	}
	return 0;
}
