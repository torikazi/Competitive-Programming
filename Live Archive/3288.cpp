#include<bits/stdc++.h>
using namespace std;
long long int lcm(long long int a,long long int b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    long long int i,g,ans,t,k,n,a[1000],s,z;
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%lld",&n);
        for(i=0,z=1;i<n;i++)
        {
            scanf("%lld",&a[i]);
            z=lcm(z,a[i]);
        }
        for(i=0,s=0;i<n;i++)
        {
            s+=z/a[i];
        }
        z=z*n;
        g=__gcd(z,s);
        z/=g;
        s/=g;
        printf("Case %lld: %lld/%lld\n",k,z,s);
    }

}
