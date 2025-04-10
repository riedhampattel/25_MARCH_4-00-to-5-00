/*
Write a c program to take row numbers from the user and print the following pyramid pattern.

    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int row,i,j,spc,k;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//5
	spc = row-1;
	for(i=1;i<=row;i++)
	{
		for(k=1;k<=spc;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		spc--;
	}
	return 0;
}
