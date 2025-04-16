#include<stdio.h>
int main()
{
	int row,col,a[10][10],b[10][10],ans[10][10],temp=1;
	int i,j,choice,k;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//3
	printf("\nEnter the col count = ");
	scanf("%d",&col);//2
	
	printf("\nEnter the elements in array a");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the %d element = ",temp++);
			scanf("%d",&a[i][j]);
		}
	}
	temp = 1;
	printf("\nEnter the elements in array b");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the %d element = ",temp++);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\nEnter the choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nArray a\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			printf("\nArray b\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",b[i][j]);
				}
				printf("\n");
			}
			printf("\nArray ans\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case 2:
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("\nArray a\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			printf("\nArray b\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",b[i][j]);
				}
				printf("\n");
			}
			printf("\nArray ans\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case 3:
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = 0;
					for(k=0;k<col;k++)
					{
						ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
					}
				}
			}
			printf("\nArray a\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			printf("\nArray b\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",b[i][j]);
				}
				printf("\n");
			}
			printf("\nArray ans\n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
	}
	
	return 0;
}
