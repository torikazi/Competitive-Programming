#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a[10000],i,c;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1,c=0;i<=n;i++)
    {
        if(a[i]>=a[m] && a[i]) c++;
    }
    cout<<c<<endl;
}
