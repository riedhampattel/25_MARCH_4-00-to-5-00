#include<stdio.h>
//without return type with argument

void multi(int n1,int n2);//declaration

int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	multi(num1,num2);
	return 0;
}

void multi(int n1,int n2)//definition
{
	int ans;
	ans = n1*n2;
	printf("\nThe multiplication is = %d",ans);
}
