#include<bits/stdc++.h>
using namespace std;
int a[2005][2005];
int main()
{
    int n,i,j,s,c,x,y,mx=0,my=0,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        mx=max(mx,x);
        my=max(my,y);
        a[x][y]=1;
    }

    n=max(mx,my);

    s=0;
    for(k=1;k<=n;k++)
    {
        for(i=1,j=k,c=0;j<=n && i<=n;j++,i++)
        {
            if(a[i][j]==1) c++;
        }
        s+=(c*(c-1))/2;
        //cout<<s<<endl;
    }

    for(k=2;k<=n;k++)
    {
        for(i=1,j=k,c=0;j<=n && i<=n;j++,i++)
        {
            if(a[j][i]==1) c++;
        }
        s+=(c*(c-1))/2;
        //cout<<s<<endl;
    }
    for(k=n;k>=1;k--)
    {
        for(i=1,j=k,c=0;j>=1 && i<=n;j--,i++)
        {
            if(a[i][j]==1) c++;
        }
        s+=(c*(c-1))/2;
        //cout<<s<<endl;
    }
    for(k=2;k<=n;k++)
    {
        for(i=k,j=n,c=0;j>=1 && i<=n;j--,i++)
        {
            if(a[i][j]==1) c++;
        }
        s+=(c*(c-1))/2;
        //cout<<s<<endl;
    }
    cout<<s<<endl;
}
