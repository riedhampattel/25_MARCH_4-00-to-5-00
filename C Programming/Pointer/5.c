#include<stdio.h>
void swapping(int *num1,int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main()
{
	int n1=10,n2=20;
	int *ptr1=&n1,*ptr2=&n2;
	printf("\nValue of n1 before swapping = %d",n1);
	printf("\nValue of n2 before swapping = %d",n2);
	
	swapping(ptr1,ptr2);
	
	printf("\nValue of n1 after swapping = %d",n1);
	printf("\nValue of n2 after swapping = %d",n2);
	return 0;
}
