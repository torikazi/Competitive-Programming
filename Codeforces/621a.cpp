#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100009],i,j,n,e=0,o=0,s,x,y;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0,s=0;i<n;i++)
    {
        s+=a[i];
        if(a[i]%2==0 && e==0)
        {
            e=a[i];
        }
        else if(a[i]%2==1 && o==0)
        {
            o=a[i];
        }
    }
    if(s%2==0) cout<<s<<endl;
    else
    {
        x=s-e;
        y=s-o;
        if(x<y) swap(x,y);
        if(x%2==0) cout<<x<<endl;
        else if(y%2==0) cout<<y<<endl;
        else cout<<0<<endl;
    }
}
