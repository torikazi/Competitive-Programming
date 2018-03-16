#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[200],i,j,x,y,f;
    memset(a,0,sizeof(a));
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>x;
        for(j=0;j<x;j++)
        {
            cin>>y;
            a[y]=1;
        }
    }
    f=1;
    for(i=1;i<=m;i++)
    {
        if(a[i]==0)
        {
            printf("NO\n");
            f=0;
            break;
        }
    }
    if(f) printf("YES\n");
}
