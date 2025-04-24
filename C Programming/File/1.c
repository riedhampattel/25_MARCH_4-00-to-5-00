#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1 = fopen("first.txt","w");
	fp2 = fopen("second.txt","w");
	fprintf(fp1,"Bye Bye World!");
	fclose(fp1);
	return 0;
}
