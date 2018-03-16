#include<stdio.h>
int main()
{
    int C,n,a[10003],i,j;
    float sum,res,c;
    scanf("%d",&C);
    for(i=1;i<=C;i++)
    {
        scanf("%d",&n);
        sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        sum/=n;
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]>sum) c++;
        }
        res=(c/n)*100;
        printf("%.3f%%\n",res);
    }
    return 0;
}
