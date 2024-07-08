#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
	return 0;
}
