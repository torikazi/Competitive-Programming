#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,a[100100],i,d,x,k,ans;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0,d=0;i<n;i++)
    {
        x=a[i]/k;
        if(a[i]%k) x++;
        d+=x;
    }
    ans=d/2;
    if(d%2) ans++;
    cout<<ans<<endl;
}
