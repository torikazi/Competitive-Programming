#include<stdio.h>
int main()
{
    long long int t,n,i,a,b,c;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        if(n==0) printf("Scenario #%lld:\n1\n",i);
        else if(n==1) printf("Scenario #%lld:\n2\n",i);
        else
        {
            a=1;
            b=2;
            while(n-->1)
            {
                c=a+b;
                a=b;
                b=c;
            }
            printf("Scenario #%lld:\n%lld\n",i,c);
        }
        printf("\n");
    }
    return 0;
}
