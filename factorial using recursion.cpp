#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*(factorial(n-1));
	}
}
int main()
{
	int fact,num;
	scanf("%d",&num);
	fact=factorial(num);
	printf("fact of %d:%d",num,fact);
}
