//write a c prgram to take 2 numbers from the user and print all the numbers between them
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting number = ");
	scanf("%d",&start);//2
	printf("\nEnter the ending number = ");
	scanf("%d",&end);//6
	
	for(i=start;i<=end;i++)
	{
		printf("%d ",i);
	}
	return 0;
}
