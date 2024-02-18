#include<stdio.h>
int main()
{
	int i,fact=1,num;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d : %d",num,fact);
}
