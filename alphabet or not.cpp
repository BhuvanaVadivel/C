#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		printf("%c is alphabet",ch);
	}
	else
	{
		printf("%c is not a alphabet",ch);
	}
}
