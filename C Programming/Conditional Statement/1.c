#include<stdio.h>
int main()
{
	int choice,n1,n2;
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Remainder");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);//2
	
	switch(choice)
	{
		case 1:
			printf("\nEnter the num 1 = ");
			scanf("%d",&n1);
			printf("\nEnter the num 2 = ");
			scanf("%d",&n2);
			printf("\nThe addition of %d and %d is %d",n1,n2,n1+n2);
		break;
		case 2:
			printf("\nEnter the num 1 = ");
			scanf("%d",&n1);
			printf("\nEnter the num 2 = ");
			scanf("%d",&n2);
			printf("\nThe subtraction of %d and %d is %d",n1,n2,n1-n2);
		break;
		case 3:
			printf("\nEnter the num 1 = ");
			scanf("%d",&n1);
			printf("\nEnter the num 2 = ");
			scanf("%d",&n2);
			printf("\nThe multiplication of %d and %d is %d",n1,n2,n1*n2);
		break;
		case 4:
			printf("\nEnter the num 1 = ");
			scanf("%d",&n1);
			printf("\nEnter the num 2 = ");
			scanf("%d",&n2);
			printf("\nThe division of %d and %d is %f",n1,n2,(float)n1/(float)n2);
		break;
		case 5:
			printf("\nEnter the num 1 = ");
			scanf("%d",&n1);
			printf("\nEnter the num 2 = ");
			scanf("%d",&n2);
			printf("\nThe remainder of %d and %d is %d",n1,n2,n1%n2);
		break;
}
	return 0;
}
