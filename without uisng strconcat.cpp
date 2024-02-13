#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30]="kongu";
	char s2[30]="engg clg";
    int n1=strlen(s1);
	int n2=strlen(s2);
	for(int i=0;i<=n2;i++)
	{
		s1[n1]=s2[i];
		n1++;
		
	}
	printf("%s\n",s1);
	printf("%s\n",s2);	
}
