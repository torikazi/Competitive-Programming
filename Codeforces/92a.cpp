#include<stdio.h>
int main()
{
    int n,m,i,j,k,sum,x;
    while(scanf("%d%d",&n,&m)==2)
    {
        sum=0;
        if(n==1)
        {
            printf("0\n");
            break;
        }
        for(i=1;sum<=m;i++)
        {
            x=i%n;
            if(x==0) x=n;
            sum+=x;
            if(sum==m)
            {
                k=0;
                break;
            }
            else if(sum>m)
            {
                sum-=x;
                k=m-sum;
                break;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
