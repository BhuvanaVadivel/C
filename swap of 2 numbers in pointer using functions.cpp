#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("%d %d",a,b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
