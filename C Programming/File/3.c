#include<stdio.h>
int main()
{
	FILE *fp;
	char str[100];
	fp = fopen("first.txt","r");
	if(fp==NULL)
	{
		printf("\nFile is empty");
	}
	else
	{
		while(fgets(str,sizeof(str),fp))
		{
			printf("%s",str);
		}
	}
	return 0;
}
