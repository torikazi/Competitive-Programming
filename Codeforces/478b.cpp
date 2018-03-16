#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,mx,ans,x,y,tmp;
    cin>>n>>m;
    mx=n-m+1;
    mx=(mx*(mx-1))/2;
    tmp=n/m;
    x=n%m;
    y=m-x;
    ans=y*(tmp*(tmp-1))/2;
    ans=ans+x*((tmp*(tmp+1))/2);

    cout<<ans<<" "<<mx;
}
