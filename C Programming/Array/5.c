#include<stdio.h>
int main()
{
	int size,a[100],index,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);//5
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the index number = ");
	scanf("%d",&index);//3
	if(index>=0 && index<=size-1)
	{
		printf("\nElement present on index %d is %d",index,a[index]);
	}
	else
	{
		printf("\nIndex number is invalid");
	}
	return 0;
}
