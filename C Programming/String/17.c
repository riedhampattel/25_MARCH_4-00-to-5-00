#include<stdio.h>

int compare(char arr1[],char arr2[]);

int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value in str1 = ");
	gets(str1);
	printf("\nEnter the value in str2 = ");
	gets(str2);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	int result = compare(str1,str2);
	
	if(result==1)
	{
		printf("\nBoth the strings are equal");
	}
	else
	{
		printf("\nBoth the strings are different");
	}
	return 0;
}

int compare(char arr1[],char arr2[])
{
	int flag = 1,i,len1,len2;
	
	len1 = strlen(arr1);
	len2 = strlen(arr2);
	
	if(len1==len2)
	{
		for(i=0;arr1[i]!='\0';i++)
		{
			if(arr1[i]!=arr2[i])
			{
				flag = 0;
				break;
			}
		}	
	}
	else
	{
		flag = 0;
	}
	return flag;
}
