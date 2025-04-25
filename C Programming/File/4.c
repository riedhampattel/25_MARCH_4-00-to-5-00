#include<stdio.h>
struct Stuent
{
	int id;
	char name[25];
	float percentage;
}s[100];
int num,choice,i;
int index=0;
int main()
{	
	up:
	printf("\n1.Add data");
	printf("\n2.Display all");
	printf("\n3.Display Particullar");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			add_data();
		break;
		case 2:
			display();
		break;
		case 3:
			display_particullar();				
		break;
	}
	char temp;
	printf("\nPress 'Y' to continue and 'N' to exit = ");
	scanf(" %c",&temp);
	if(temp=='y' || temp=='Y')
	{
		goto up;
	}
	return 0;
}

void add_data()
{
	FILE *fp;
	fp=fopen("student.txt","a");
	printf("\nEnter the number of students = ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nEnter the details of student %d",i+1);
		printf("\nId = ");
		scanf("%d",&s[index].id);
		fprintf(fp,"%d\t",s[index].id);
		printf("\nName = ");
		scanf("%s",&s[index].name);
		fprintf(fp,"%s\t",s[index].name);
		printf("\nPercentage = ");
		scanf("%f",&s[index].percentage);
		fprintf(fp,"%.2f",s[index].percentage);
		printf("\n");
		fprintf(fp,"\n");
		index++;
	}
}

void display()
{
	printf("\n\nid        name        percentage");
	printf("\n-----------------------------------");
	for(i=0;i<index;i++)
	{
		printf("\n%d        %s           %.2f",s[i].id,s[i].name,s[i].percentage);
	}
}

display_particullar()
{
	int id;
	printf("\nEnter the id you want to search for = ");
	scanf("%d",&id);
	for(i=0;i<index;i++)
	{
		if(s[i].id==id)
		{
			printf("\n\nid        name        percentage");
			printf("\n-----------------------------------");
			printf("\n%d        %s           %.2f",s[i].id,s[i].name,s[i].percentage);
		}
	}
}
