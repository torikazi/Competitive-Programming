#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y,f,ans=0;
    cin>>n;
    ans=n;
    if(ans%2!=0) ans++;
    ans=ans/2;
    if(n%2==0) cout<<ans<<endl;
    else cout<<ans*-1<<endl;
}
