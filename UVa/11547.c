#include<stdio.h>
int main()
{
    long long int n,t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n=n%100;
        n=n/10;
        if(n<0) n*=-1;
        printf("%lld\n",n);
    }
    return 0;
}
