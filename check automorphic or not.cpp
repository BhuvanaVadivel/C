#include<stdio.h>
int checkAutomorphic(int n)
{
    int square=n*n;
    while(n!=0)
    {
        if(n%10 != square%10)
        {
            return 0;
        }
        n/=10;
        square/=10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int square=n*n;
    if(checkAutomorphic(n))
    {
        printf("%d automorphic",square);
    }
    else
    {
        printf("%d not a automorphic",square);
    }
}
