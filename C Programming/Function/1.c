#include<stdio.h>
//with return type with argument
int add(int n1,int n2);//declaration

int add(int n1,int n2)//definition
{
	int ans;
	ans = n1+n2;
	return ans;
}
int main()
{
	int num1,num2;
	printf("\nEnter the value in num1 = ");
	scanf("%d",&num1);//3
	printf("\nEnter the value in num2 = ");
	scanf("%d",&num2);//5
	
	int result = add(num1,num2);//calling
	printf("\nThe addition is = %d",result);
	return 0;
}
