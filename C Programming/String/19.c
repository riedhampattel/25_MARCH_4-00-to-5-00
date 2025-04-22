#include<stdio.h>
int main()
{
	char str1[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	
	printf("\nOriginal value of str1 = %s",str1);
	
	lower(str1);
	return 0;
}

void lower(char arr1[])
{
	int i;
	for(i=0;arr1[i]!='\0';i++)
	{
		if(arr1[i]>=65 && arr1[i]<=90)
		{
			arr1[i] = arr1[i] + 32;
		}
	}
	printf("\nvalue in lower case = %s",arr1);
}
