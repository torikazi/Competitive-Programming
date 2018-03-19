#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll nCr(ll n, ll r)
{
    ll s=1,i;
    for(i=0;i<r;i++)
        s=(s*(n-i))/(i+1);
    return s;
}

int main()
{
    ll n,m,t,s=0,i;
    cin>>n>>m>>t;
    for(i=4;i<t;i++)
    {
        s+=nCr(n,i)*nCr(m,t-i);
    }
    cout<<s<<endl;

    return 0;
}
