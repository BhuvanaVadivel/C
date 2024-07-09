#include<stdio.h>
#include<string.h>

int main()
{
	int len;
	int i,j;
	char str[50];
	scanf("%s",str);
	len=strlen(str);
	int isPalindrome=1;
	for(i=0,j=len-1;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			isPalindrome=0;
			break;
		}
	}
	if(isPalindrome)
	{
		printf("%s  is palindrome",str);
	}
	else
	{
		printf("%s is not palindrome",str);
	}
}
