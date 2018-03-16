#include<stdio.h>
int main()
{
    long long int n,k,t,a,s;
    while(scanf("%lld%lld",&n,&k)==2&&k>1)
    {
        s=n;
        while(n>=k)
        {
            a=n/k;
            s+=a;
            n=(n%k)+a;
        }
        printf("%lld\n",s);
    }
    return 0;
}
