#include<stdio.h>
int main()
{
	int n1,n2;
	char ch = '%';
	char choice;
	printf("\nPress + for addition");
	printf("\nPress - for subtraction");
	printf("\nPress * for multiplication");
	printf("\nPress / for division");
	printf("\nPress %c for remainder",ch);
	printf("\nEnter your choice = ");//+
	scanf(" %c",&choice);

	switch(choice)
	{
		case '+':
			printf("\nEnter the value in n1 = ");
			scanf("%d",&n1);
			printf("\nEnter the value in n2 = ");
			scanf("%d",&n2);
			printf("\nThe addition of %d and %d is %d",n1,n2,n1+n2);
		break;
		case '-':
			printf("\nEnter the value in n1 = ");
			scanf("%d",&n1);
			printf("\nEnter the value in n2 = ");
			scanf("%d",&n2);
			printf("\nThe subtraction of %d and %d is %d",n1,n2,n1-n2);
		break;
		case '*':
			printf("\nEnter the value in n1 = ");
			scanf("%d",&n1);
			printf("\nEnter the value in n2 = ");
			scanf("%d",&n2);
			printf("\nThe multiplication of %d and %d is %d",n1,n2,n1*n2);
		break;
		case '/':
			printf("\nEnter the value in n1 = ");
			scanf("%d",&n1);
			printf("\nEnter the value in n2 = ");
			scanf("%d",&n2);
			printf("\nThe division of %d and %d is %d",n1,n2,n1/n2);
		break;
		case '%':
			printf("\nEnter the value in n1 = ");
			scanf("%d",&n1);
			printf("\nEnter the value in n2 = ");
			scanf("%d",&n2);
			printf("\nThe remainder of %d and %d is %d",n1,n2,n1%n2);
		break;
		default :
			printf("\nInvalid input");
		break;
	}
	return 0;
}
