#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("\nEnter the row number = ");
	scanf("%d",&row);//2
	printf("\nEnter the col number = ");
	scanf("%d",&col);//3
	for(i=1;i<=row;i++)//row
	{
		for(j=1;j<=col;j++)//col
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
