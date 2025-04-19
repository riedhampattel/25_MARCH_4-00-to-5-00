#include<stdio.h>
int main()
{
	int arr[7] = {11,22,33,44,55,66,77};
	int *ptr = &arr;
	
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
