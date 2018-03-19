#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[10000],mx,s,x,y;
    cin>>n;
    s=0;
    mx=0;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        s-=x;
        s+=y;
        mx=max(mx,s);
    }
    cout<<mx<<endl;
}
