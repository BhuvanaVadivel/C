#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30]="balaji";
	char s2[30];
	char temp;
	int si=0;
	int li;
	li=strlen(s1);
	while(si<li)
	{
		temp=s1[si];
		s1[si]=s1[li-1];
		s1[li-1]=temp;
		si++;
		li--;
	}
	printf("%s",s1);
}
