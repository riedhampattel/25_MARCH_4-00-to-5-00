#include<stdio.h>

void copy(char arr1[],char arr2[]);

int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	copy(str2,str1);
	return 0;
}

void copy(char arr1[],char arr2[])
{
	int i;
	for(i=0;arr2[i]!='\0';i++)
	{
		arr1[i] = arr2[i];
	}
	arr1[i] = '\0';
	printf("\nCopied string = %s",arr1);
	printf("\nCopied string = %s",arr2);
}
