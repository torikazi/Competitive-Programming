#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a[1010];
int main()
{
    ll n,m,k,i,j,x,cnt,c,dif=0;
    cin>>n>>m>>k;
    for(i=0;i<=m;i++)
    {
        cin>>a[i];
    }
    for(i=0,dif=0;i<m;i++)
    {
        x=a[i]^a[m];
        for(j=0,cnt=0;j<n;j++)
        {
            if(x&(1<<j)) cnt++;
        }
        if(cnt<=k) dif++;
    }
    cout<<dif<<endl;
}
