#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[1000],i,cnt=0;
    cin>>n>>k;
    a[0]=k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    a[n+1]=k;
    for(i=1;i<=n;i++)
    {
        if(a[i]+a[i-1]<k)
        {
            cnt+=(k-(a[i]+a[i-1]));
            a[i]+=(k-(a[i]+a[i-1]));
        }
    }
    cout<<cnt<<endl;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
