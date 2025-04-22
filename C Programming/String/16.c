#include<stdio.h>

void concat(char arr1[],char arr2[]);

int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	concat(str1,str2);
	
	return 0;
}

void concat(char arr1[],char arr2[])
{
	int i,len=0;
	for(i=0;arr1[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;arr2[i]!='\0';i++)
	{
		arr1[len] = arr2[i];
		len++;
	}
	arr1[len] = '\0';
	printf("\nConcated string = %s",arr1);
}
