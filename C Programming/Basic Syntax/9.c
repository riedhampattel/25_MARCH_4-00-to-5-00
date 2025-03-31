#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;//post increment
	printf("\nValue of a = %d",a);//11
	printf("\nValue of b = %d",b);//10
	return 0;
}
