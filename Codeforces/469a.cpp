#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110],i,p,q,n,f,x;
    memset(a,0,sizeof(a));
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&x);
        a[x]=1;
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&x);
        a[x]=1;
    }
    for(i=1,f=1;i<=n;i++)
    {
        if(!a[i])
        {
            f=0;
            break;
        }
    }
    if(f) printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");
    return 0;
}
