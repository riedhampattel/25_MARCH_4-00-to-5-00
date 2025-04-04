#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the alphabet = ");
	scanf(" %c",&ch);//B
	if(ch>='A' && ch<='Z')
	{
		printf("\nThis is an upper case");
	}
	else
	{
		printf("\nThis is a lower case");
	}
	return 0;
}
