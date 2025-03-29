#include<stdio.h>
int main()
{
	int a = 5;
	int b = 2;
	float ans;
	ans = (float)a/(float)b;//explicit
	printf("\nThe division of %d and %d is %.1f",a,b,ans);
	return 0;
}
