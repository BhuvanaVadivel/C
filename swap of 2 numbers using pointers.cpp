#include<stdio.h>
int main()
{
	int a,b;
	int temp;
	int *ptr1,*ptr2;
	scanf("%d %d",&a,&b);
	printf("Before swapping:%d %d\n",a,b);
	ptr1=&a;
	ptr2=&b;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("%d %d",*ptr1,*ptr2);
}
