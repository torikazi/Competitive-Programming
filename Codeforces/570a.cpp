#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110][110],b[110],i,j,k,n,m,mx;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++) b[i]=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++)
    {
        mx=a[i][1];
        k=1;
        for(j=2;j<=n;j++)
        {
            if(a[i][j]>mx)
            {
                mx=a[i][j];
                k=j;
            }
        }
        b[k]++;
    }
    mx=b[1];
    k=1;
    for(i=2;i<=n;i++)
    {
        if(b[i]>mx)
        {
            mx=b[i];
            k=i;
        }
    }
    printf("%d\n",k);
}
