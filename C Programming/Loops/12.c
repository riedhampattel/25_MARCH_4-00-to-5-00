#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);//121
	int temp = num;
	while(num!=0)
	{
		rem = num % 10;
		rev = (rev*10) + rem;
		num = num / 10;
	}
	if(rev == temp)
	{
		printf("\n%d is a pallindrome number",temp);
	}
	else
	{
		printf("\n%d is not a pallindrome number",temp);		
	}
	return 0;
}
