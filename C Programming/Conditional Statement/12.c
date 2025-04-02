#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter your age = ");
	scanf("%d",&age);
	age>18 ? printf("\nYou are eligible for voting"):printf("\nYou are not eligible for voting");
	return 0;
}
