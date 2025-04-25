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
	fclose(fp);
}

void display()
{
	FILE *fp;
	fp = fopen("student.txt","r");
	char str[100];
	printf("\n\nid    name    percentage");
	printf("\n-----------------------------------");
	while(fgets(str,sizeof(str),fp))
	{
		printf("\n%s",str);
	}
	fclose(fp);
}

display_particullar()
{
	FILE *fp;
	fp = fopen("student.txt","r");
	char id[5];
	int flag,check=1;
	char str[100];
	printf("\nEnter the id you want to search for = ");
	scanf("%s",&id);//101\0
	while(fgets(str,sizeof(str),fp))
	{
		flag = 1;
		for(i=0;id[i]!='\0';i++)
		{
			if(id[i]!=str[i])
			{
				flag = 0;
			}
		}
		if(flag==1)
		{
			printf("%s",str);
			check = 0;
		}
	}
	if(check==1)
	{
		printf("\nData not found");
	}
}
