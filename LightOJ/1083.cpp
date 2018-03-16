#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[30005],i,n,mx,cs=1,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0,mx=0;i<n;i++)
        {
            for(j=i+1,c=1;j<n;j++)
            {
                if(a[j]>=a[i]) c++;
                else break;
            }
            for(j=i-1;j>=0;j--)
            {
                if(a[j]>=a[i]) c++;
                else break;
            }
           // cout<<c<<" ";
            mx=max(mx,a[i]*c);
        }
        printf("Case %d: %d\n",cs++,mx);
    }
}
