#include<stdio.h>
int main()
{
	int size,a[100],i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);	
	}	
	
	int min = a[0];
	int max = a[0];
	
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	
	printf("\nMinimum value = %d",min);
	printf("\nMaximum value = %d",max);
	return 0;
}
