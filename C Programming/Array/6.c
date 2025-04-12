#include<stdio.h>
int main()
{
	int size,a[100],i,element,index=-1;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the element = ");
	scanf("%d",&element);
	
	for(i=0;i<size;i++)
	{
		if(element==a[i])
		{
			index = i;
			break;
		}
	}
	
	if(index!=-1)
	{
		printf("\n%d is present on index number %d",element,index);
	}
	else
	{
		printf("\n%d is not present in an array",element);	
	}
	return 0;
}
