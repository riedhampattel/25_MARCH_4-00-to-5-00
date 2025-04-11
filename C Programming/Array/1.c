#include<stdio.h>
int main()
{
	//int ---> 4 bytes
	//float ---> 4 bytes
	//char ---> 1 bytes
	int a[5] = {1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
