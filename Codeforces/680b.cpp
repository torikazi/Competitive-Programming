#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[200],cnt=0,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=m,j=m;i<=n && j>=1;i++,j--)
    {
        if(a[i]==1 && a[j]==1 && i==j)
            cnt++;
        else if(a[i]==1 && a[j]==1)
            cnt+=2;
    }
    //printf("%d %d  ",i,j);
    if(j>=0)
    {
        for(;j>=0;j--)
        {
            if(a[j]==1) cnt++;
        }
    }
    if(i<=n)
    {
        for(;i<=n;i++)
        {
            if(a[i]==1) cnt++;
        }
    }
    printf("%d\n",cnt);
    fflush(stdout);
}
