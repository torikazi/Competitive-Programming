#include<stdio.h>
int main()
{
    long long int n,i,j,tmp,a[200000];
    while(scanf("%lld",&n))
    {
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        for(i=n-1;i>=0;i--)
        {
            printf("%lld ",a[i]);
        }
        printf("\n");
    }
    return 0;
}

