#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[30][5],i,n,ans,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        for(i=1;i<n;i++)
        {
            a[i][0]+=min(a[i-1][1],a[i-1][2]);
            a[i][1]+=min(a[i-1][0],a[i-1][2]);
            a[i][2]+=min(a[i-1][0],a[i-1][1]);
        }
        ans=min(min(a[n-1][0],a[n-1][1]),a[n-1][2]);
        printf("Case %d: %d\n",cs++,ans);
    }

}
