#include<stdio.h>
struct Demo1
{
	int a1;
	char ch1;
};
union Demo2
{
	int a2;
	char ch2;
};
int main()
{
	struct Demo1 d;
	union Demo2 u;
	
	d.a1 = 101;
	u.a2 = 68;
	u.ch2 = 'A';
	u.a2 = 97;
	
	printf("\nThe value of a1 = %d",d.a1);
	printf("\nThe value of ch1 = %c",d.ch1);
	
	printf("\nThe value of a2 = %d",u.a2);
	printf("\nThe value of ch2 = %c",u.ch2);
	return 0;
}
