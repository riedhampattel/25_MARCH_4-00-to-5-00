#include<stdio.h>
int main()
{
	int i;
	float f;
	char ch;
	
	printf("Enter the value in i = ");
	scanf("%d",&i);//4bytes
	printf("\nValue of i = %d",i);
	
	printf("\nEnter the value in f = ");
	scanf("%f",&f);//4bytes
	printf("\nValue of f = %f",f);
	
	printf("\nEnter the value in ch = ");
	scanf(" %c",&ch);//1bytes
	printf("\nValue of ch = %c",ch);
	return 0;
}
