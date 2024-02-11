#include<stdio.h>
#include<stdlib.h>
int functionA(int n)
{
	if(n>1)
	{
	    return;
	}
	printf("%d",n);
	n=n-1;
	functionB(n);
}
int functionB(int n)
{
	if(n<2)
	{
		return;
	}
	printf("%d",n);
	n=n/2;
	functionA(n);
}
int main()
{
	functionB(20);
	return 0;
}
