#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value of str1 = ");
	gets(str1);
	printf("\nEnter the value of str2 = ");
	gets(str2);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	int result = strcmp(str1,str2);
	
	if(result==0)
	{
		printf("\nBoth the strings are equal");
	}
	else
	{
		printf("\nBoth the strings are diffrent");
	}
	return 0;
}
