#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s,k,cnt=0,x,q,a[1000],m,j,y,ss,ans;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>x>>y;
    ans=0;
    for(i=n;i>=0;i--)
    {
        for(j=1,s=0;j<i;j++)
        {
            s+=a[j];
        }
        for(j=i,ss=0;j<=n;j++)
        {
            ss+=a[j];
        }
        if(s>=x && s<=y &&ss>=x && ss<=y)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
