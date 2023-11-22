#include<stdio.h>
int main()
{
	int i,j,n,sum;
	scanf("%d",&n);
	int max=10;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]<=max)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("%d",sum);
	
}
