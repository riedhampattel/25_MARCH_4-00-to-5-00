#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the alphabet = ");
	scanf(" %c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("\nThis is an upper case");
	}
	else
	{
		printf("\nThis is a lower case");
	}
	return 0;
}
