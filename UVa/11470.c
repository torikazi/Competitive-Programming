#include<stdio.h>
int main()
{
    int n,a[15][15],i,j,k,sum,x;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0,j=n;i<j;i++,j--)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
                break;
            }

            else
            {
                sum=0;
                for(k=i;k<j;k++)
                {
                sum+=a[i][k]+a[k][i]+a[j][k]+a[k][j];
                sum-=a[i][i]+a[i][j]+a[j][i]+a[j][j];
                printf("%d\n",sum);
                }
            }
        }
    }
}
