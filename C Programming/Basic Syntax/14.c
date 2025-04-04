//Write a c program to swap 2 values using third variable
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int temp;
	
	printf("\nValue of a before swapping = %d",a);
	printf("\nValue of b before swapping = %d",b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nValue of a after swapping = %d",a);
	printf("\nValue of b after swapping = %d",b);
	return 0;
}
