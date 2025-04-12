#include<stdio.h>
int main()
{
	int size,a[100],b[100],ans[100],i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	printf("\nEnter the elements in array a := ");
	for(i=0;i<size;i++)
	{
		printf("\nEnter the %d element = ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the elements in array b := ");
	for(i=0;i<size;i++)
	{
		printf("\nEnter the %d element = ",i+1);
		scanf("%d",&b[i]);
	}
	
	
	for(i=0;i<size;i++)
	{
		ans[i] = a[i] + b[i];
	}
	
	printf("\nAddition of arrays = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",ans[i]);
	}
	return 0;
}
