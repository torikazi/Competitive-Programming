#include<stdio.h>
int main()
{
    int t,a[20],n,k,j,x;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[j]);
        }
        n=(n/2)+1;
        printf("Case %d: %d\n",k,a[n]);
    }
    return 0;
}
