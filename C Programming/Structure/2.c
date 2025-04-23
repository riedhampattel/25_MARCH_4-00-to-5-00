#include<stdio.h>
struct Student
{
	int roll;
	char name[25];
	char grade;
}s[100];
int main()
{
	int count,i;
	printf("\nEnter the student count = ");
	scanf("%d",&count);
	
	for(i=0;i<count;i++)
	{
		printf("\nEnter the details of student %d",i+1);
		printf("\nRoll no. = ");
		scanf("%d",&s[i].roll);
		printf("\nName = ");
		scanf("%s",s[i].name);
		printf("\nEnter the grade = ");
		scanf(" %c",&s[i].grade);
	}
	for(i=0;i<count;i++)
	{
		printf("\nDetails of student %d",i+1);
		printf("\nRoll no. = %d",s[i].roll);
		printf("\nName = %s",s[i].name);
		printf("\nGrade = %c",s[i].grade);
	}
	return 0;
}
