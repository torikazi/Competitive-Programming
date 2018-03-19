#include<bits/stdc++.h>
using namespace std;
long long int a[300000],b[300000];
int main()
{
    long long int n,q,i,l,r,s;
    memset(b,0,sizeof(b));

    scanf("%I64d%I64d", &n,&q);
    for(i=1;i<=n;i++)
        scanf("%I64d", &a[i]);
    for(i=0;i<q;i++)
    {
      scanf("%I64d%I64d", &l,&r);
        b[l]++;
        b[r+1]--;
    }
    for(i=1;i<=n;i++)
        b[i]+=b[i-1];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(i=n,s=0;i>=1;i--)
        s+=b[i]*a[i];

    printf("%I64d\n",s);

}
