#include<stdio.h>
//with return type without argument
float div();//declaration

int main()
{
	float result = div();
	printf("\nThe division is = %.2f",result);
	return 0;
}

float div()//definition
{
	int n1,n2;
	printf("\Enter the value of n1 = ");
	scanf("%d",&n1);//5
	printf("\Enter the value of n2 = ");
	scanf("%d",&n2);//2
	return (float)n1/(float)n2;
}
