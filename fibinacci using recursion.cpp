#include <stdio.h>
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int num,fact;
    scanf("%d",&num);
    printf("%d",factorial(num));
}
