#include<stdio.h>
int harshad(int n)
{
    int sum=0;
    int temp=n;
    while(temp!=0)
    {
        sum=sum+temp%10;
        temp/=10;
    }
    return n%sum==0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(harshad(n))
    {
        printf("%d harshad number",n);
    }
    else
    {
        printf("%d not a harshad number",n);
    }
}
