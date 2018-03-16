#include<stdio.h>
int main()
{
    int T,n,i,j,a[10005],max;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        max=a[0];
        for(j=0;j<n;j++)
        {
            if(a[j]>max) max=a[j];
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}

