#include<stdio.h>
int main()
{
	int size,a[100],i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements i a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)//0/4
	{
		for(j=i+1;j<size;j++)//2/4
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nArray after sorting = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nMinimum element = %d",a[0]);
	printf("\nMaximum element = %d",a[size-1]);
	return 0;
}
