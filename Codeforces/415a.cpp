#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],b[1000],i,j,m;
    scanf("%d %d",&n,&m);
    memset(b,0,sizeof(b));
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        for(j=a[i];j<=n;j++)
        {
            if(!b[j]) b[j]=a[i];
            else break;
        }
    }
    for(i=1;i<=n;i++) printf("%d ",b[i]);
    printf("\n");
}
