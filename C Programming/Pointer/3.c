#include<stdio.h>
int main()
{
	char arr[7] = {'A','B','C','D','E','F','G'};
	char *ptr = &arr;
	
	printf("\nAddress of array = %p",ptr);
	printf("\nAddress of arr[0] = %p",&arr[0]);
	printf("\nAddress of arr[1] = %p",&arr[1]);
	printf("\nAddress of arr[2] = %p",&arr[2]);
	printf("\nAddress of arr[3] = %p",&arr[3]);
	printf("\nAddress of arr[4] = %p",&arr[4]);
	printf("\nAddress of arr[5] = %p",&arr[5]);
	printf("\nAddress of arr[6] = %p",&arr[6]);
	return 0;
}
