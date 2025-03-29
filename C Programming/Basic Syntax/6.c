#include<stdio.h>
int main()
{
	int a=5,b=2,ans;
	ans = a + b;
	printf("\nThe addition of %d and %d is %d",a,b,ans);
	
	ans = a - b;
	printf("\nThe subtraction of %d and %d is %d",a,b,ans);
	
	printf("\nThe multiplication of %d and %d is %d",a,b,a*b);
	
	printf("\nThe division of %d and %d is %d",a,b,a/b);
	return 0;
}
