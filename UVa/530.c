#include<stdio.h>
int main()
{
    long long int n,k,a,i;
    while(scanf("%lld %lld",&n,&k)==2)
    {
        if(n==0&&k==0) break;
        if(n-k<k) k=n-k;
        for(i=1,a=1;i<=k;i++,n--)
        {
            a*=n;
            a/=i;
        }
        printf("%lld\n",a);
    }
    return 0;
}
