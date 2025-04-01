#include<stdio.h>
int main()
{
	int n1,n2;
	printf("\nEnter the value in n1 = ");
	scanf("%d",&n1);//5
	printf("\nEnter the value in n2 = ");
	scanf("%d",&n2);//7
	
	switch(n1>n2)
	{
		case 0:
			printf("\n%d is the biggest number",n2);
		break;
		case 1:
			printf("\n%d is the biggest number",n1);
		break;
	}
	return 0;
}
