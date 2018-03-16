#include<stdio.h>
int main()
{
    int n,sum,i,t=1;
    while(scanf("%d",&n)==1)
    {
        if(t==1) printf("PERFECTION OUTPUT\n");
        t++;
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        for(i=1,sum=0;i<=n/2;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        if(sum==n) printf("%5d  PERFECT\n",n);
        else if(sum>n) printf("%5d  ABUNDANT\n",n);
        else if(sum<n) printf("%5d  DEFICIENT\n",n);
    }
    return 0;
}
