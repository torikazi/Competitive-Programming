#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,ans;
    cin>>a>>b;
    x=abs(a-b);
    c=x/2;
    ans=c*(c+1)/2;
    ans*=2;
    if(c*2!=x)
    {
        ans+=c+1;
    }
    cout<<ans<<endl;
}
