#include<stdio.h>
int main()
{
    long long int a,n,s,m,x;
    while(scanf("%lld",&n)==1)
    {
        m=n;
        s=0;
        while(n!=0)
        {
            a=n%10;
            s=s*10+a;
            n/=10;
        }
        x=(s-m)/9;
        printf("%lld - %lld = %lld = 9 * %lld\n",s,m,s-m,x);
    }
    return 0;
}
