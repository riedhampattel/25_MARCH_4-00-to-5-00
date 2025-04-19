#include<stdio.h>
int main()
{
	char arr[7] = {'A','B','C','D','E','F','G'};
	char *ptr = &arr;
	
	int i;
	for(i=0;i<7;i++)
	{
		printf("%d ",*ptr+i);
	}
	
	return 0;
}
