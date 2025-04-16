#include<stdio.h>
int main()
{
	int row,col,arr[100][100],i,j;
	printf("\nEnter the row count = ");
	scanf("%d",&row);
	printf("\nEnter the col count = ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
