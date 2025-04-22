#include<stdio.h>
int main()
{
	char str1[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	
	printf("\nOriginal value of str1 = %s",str1);
	
	upper(str1);
	return 0;
}

void upper(char arr1[])
{
	int i;
	for(i=0;arr1[i]!='\0';i++)
	{
		if(arr1[i]>=97 && arr1[i]<=122)
		{
			arr1[i] = arr1[i] - 32;
		}
	}
	printf("\nvalue in upper case = %s",arr1);
}
