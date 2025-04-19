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
	
	strrev(str1);
	strrev(str2);
	
	printf("\nValue of str1 after using reverse function = %s",str1);
	printf("\nValue of str2 after using reverse function = %s",str2);
	return 0;
}
