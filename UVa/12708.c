#include<stdio.h>
int main()
{
    long long int n,i,j,max,t;
    scanf("%lld",&t);
    while(t--)
    {
        max=0;
        scanf("%lld",&n);
        /*for(i=1;i<=n;i++)
        {
            for(j=1;j*j<=i;j++)
            {
                if(i%j==0&&j>=max) max=j;
            }
        }*/
        printf("%lld\n",n/2);
    }
    return 0;
}
