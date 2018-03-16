#include<stdio.h>
int main()
{
    int t,i,j,n,x,y,a[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0,x=0;j<n-1;j++)
        {
            if(a[j]<a[j+1]) x++;
        }
        for(j=0,y=0;j<n-1;j++)
        {
            if(a[j]>a[j+1]) y++;
        }
        printf("Case %d: %d %d\n",i,x,y);
    }
    return 0;
}
