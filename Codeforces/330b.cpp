#include<bits/stdc++.h>
int main()
{
    int n,m,i,a[10000],x,y,c=0;
    memset(a,0,sizeof(a));
    scanf("%d%d",&n,&m);
    while(m--)
    {
        scanf("%d%d",&x,&y);
        a[x]=1;
        a[y]=1;
    }
    for(i=1,c=0;i<=n;i++)
    {
        if(a[i]==0)
        {
            x=i;
            break;
        }
    }
    printf("%d\n",n-1);
    for(i=1;i<=n;i++)
    {
        if(x!=i) printf("%d %d\n",x,i);
    }

}
