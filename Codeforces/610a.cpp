#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,ans;
    cin>>n;
    if(n%2!=0)
        cout<<0<<endl;
    else
    {
        n=n/2;
        x=n/2;
        if(n-x==x)
            ans=x-1;
        else
            ans=x;
        cout<<ans<<endl;
    }
}
