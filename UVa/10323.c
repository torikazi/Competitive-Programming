#include<stdio.h>
long long int fact(long long int n)
{
    long long int a=1,i;
    for(i=1;i<=n;i++)
    {
        a*=i;
    }
    return a;
}
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0&&n%2==0) printf("Underflow!\n");
        else if(n<0&&n%2!=0) printf("Overflow!\n");
        else if(n>13) printf("Overflow!\n");
        else if(n==0||n<=7) printf("Underflow!\n");
        else printf("%lld\n",fact(n));
    }
    return 0;
}
