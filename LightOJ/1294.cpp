#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,ans,x,y,m,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        x=(m*(m+1))/2;
        m=m+m;
        y=(m*(m+1))/2;
        y=y-x;
        y=y-x;
        ans=y*(n/m);
        cout<<"Case "<<cs++<<": "<<ans<<endl;
    }
}
