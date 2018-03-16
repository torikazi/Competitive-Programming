#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200],i,x,y,ans;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            x=i;
        }
        if(a[i]==n)
        {
            y=i;
        }
    }
    if(y<x) swap(x,y);

        if(n-y>x-1)
        {
            ans=n-x;
        }
        else if(n-y<x-1)
        {
            ans=y-1;
        }
        else ans=n-x;

    cout<<ans<<endl;

}
