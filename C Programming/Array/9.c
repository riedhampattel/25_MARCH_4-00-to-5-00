#include<stdio.h>
int main()
{
	int arr[2][3] = {{1,2,3},{4,5,6}};
	int i,j;
	
	for(i=0;i<2;i++)//row
	{
		for(j=0;j<3;j++)//col
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
