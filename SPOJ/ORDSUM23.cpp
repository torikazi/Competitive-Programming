#include<bits/stdc++.h>
using namespace std;
long long int a[1000005];
int main()
{
    long long int i,n,t;
    a[0]=0;
    a[1]=0;
    a[2]=1;
    a[3]=1;
    for(i=4;i<=1000000;i++)
    {
        a[i]=(a[i-2]+a[i-3])%1000000007;
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",a[n]);
    }
}
