/*
Write a c program to take row numbers from the user and print the following pyramid pattern.

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int row,i,j,p,q;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//3
	for(i=1;i<=row;i++)
	{
		if(i%2==0)
		{
			p = 1;
			q = 0;
		}
		else
		{
			p = 0;
			q = 1;
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%d ",p);
			}
			else
			{
				printf("%d ",q);
			}
		}
		printf("\n");
	}
	return 0;
}
