#include<stdio.h>
#include<string.h>
int main()
{
	int variable;
	int *ptr1;
	int **ptr2;
	ptr1=&variable;
	ptr2=&ptr1;
	scanf("%d",&variable);
	printf("value using variable=%d\n",variable);
	printf("value using variable=%d\n",*ptr1);
	printf("value using variable=%d\n",**ptr2);
	return 0;
}
