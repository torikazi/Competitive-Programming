#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;
    cin>>n>>k>>t;
    if(t<=k) cout<<t<<endl;
    else if(t<=n+k && t>n)
    {
        cout<<n+k-t<<endl;
    }
    else cout<<k<<endl;
}
