#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[2005],b[2005],c[2005],i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
        b[i]=i;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
        }
    }

    c[1]=1;
    for(i=2;i<=n;i++)
    {
        if(a[i-1]==a[i])
            c[i]=c[i-1];
        else c[i]=i;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(b[i]<b[j])
            {
                swap(c[i],c[j]);
                swap(b[i],b[j]);
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",c[i]);
    }

}
