#include<stdio.h>
#include<math.h>
int main()
{
    long long int l,n,u,i,j,max,c,m;
    scanf("%d",&n);
    while(n--)
    {
        max=0;
        scanf("%lld%lld",&l,&u);
        for(i=l;i<=u;i++)
        {
            for(j=1,c=0;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    c++;
                    if(c>max)
                    {
                        max=c;
                        m=i;
                    }
                }
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,m,max);
    }
    return 0;
}
