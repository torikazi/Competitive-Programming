#include<stdio.h>
int main()
{
    int n,P,Q,T,i,j,a[2000],count,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        sum=0;
        count=0;
        scanf("%d%d%d",&n,&P,&Q);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=1;j<=n&&j<=P;j++)
        {
            sum+=a[j];
            if(sum>Q) break;
            count++;
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
