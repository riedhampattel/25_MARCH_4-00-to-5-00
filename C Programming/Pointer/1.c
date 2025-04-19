#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int *ptr = &a;
	
	printf("\nValue of a = %d",a);
	printf("\nValue of a = %d",*ptr);
	printf("\nAddress of a = %p",ptr);
	printf("\nAddress of a = %p",&a);
	
	printf("\nAddress of b = %p",&b);
	printf("\nAddress of c = %p",&c);
	return 0;
}
