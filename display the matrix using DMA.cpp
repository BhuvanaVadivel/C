#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j,*k;
	scanf("%d %d",&n,&m);
	k=(int*)malloc(sizeof(int));
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",(k+i*m+j));
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",*(k+i*m+j));
		}
		printf("\n");
	}
}
