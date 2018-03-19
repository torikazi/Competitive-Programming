#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,y,ans;
    cin>>n>>m;
    if(n==1) ans=1;
    else if(n%2==0)
    {
        y=n-m+1;
        if(y>m) ans=m+1;
        else ans=m-1;
    }
    else if(n%2!=0)
    {
        y=n-m+1;
        if(y==m) ans=m-1;
        else if(y<m) ans=m-1;
        else ans=m+1;
    }
    cout<<ans<<endl;
}
