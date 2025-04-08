#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=20;i++)
	{
		if(i%6==0)
		{
			break;
		}
		printf("%d ",i);
	}
	return 0;
}
