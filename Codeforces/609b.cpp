#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s,k,cnt=0,x,q,a[100],m,j;
    cin>>n>>m;
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(i=1,cnt=0;i<=m;i++)
    {
        for(j=i+1;j<=m;j++)
        {
            cnt+=(a[i]*a[j]);
        }
    }
    cout<<cnt<<endl;

}
