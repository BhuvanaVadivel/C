#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30]="eshwara save me";
	int n;
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		++n;
	}
	printf("%d",n);
}
