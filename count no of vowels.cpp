#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char str[100];
	int vo=0;
	scanf("%[^\n]s",&str);
	for(i=0;i<=str[i];i++)
	{
		if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			vo++;
		}
		
	}
	printf("%d",vo);
}
