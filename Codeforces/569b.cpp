#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100009],b[100009],c[100009],i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        b[i]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]=1;
    }
    for(i=1,j=0;i<=n;i++)
    {
        if(b[i]==0)
        {
            c[j]=i;
            j++;
        }
    }
    for(i=1,j=0;i<=n;i++)
    {
        if(b[a[i]]==1 && a[i]<=n)
        {
            printf("%d ",a[i]);
            b[a[i]]=0;
        }
        else
        {
            printf("%d ",c[j]);
            j++;
        }
    }
}
