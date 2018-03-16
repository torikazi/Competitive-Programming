#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q,i,x,y;
    int a[200005];
    memset(a,0,sizeof(a));
    cin>>n>>k>>q;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        a[x]++;
        a[y+1]--;
    }
    for(i=1;i<=200000;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    for(i=1;i<=200000;i++)
    {
        if(a[i]>=k) a[i]=1;
        else a[i]=0;
    }
    for(i=1;i<=200000;i++)
        a[i]=a[i]+a[i-1];
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        cout<<a[y]-a[x-1]<<endl;
    }

}
