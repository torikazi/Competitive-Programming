#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],t,n,x,y,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            a[i]=abs(x-y);
        }
        f=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                f=0;
                break;
            }
        }
        if(f) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        if(t) cout<<endl;
    }
}
