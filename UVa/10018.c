#include<stdio.h>
int main()
{
    long long int n,t,sum,i,a,c,s,p,tmp,tmp1;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        c=0;
        while(1)
        {
            s=0;
            tmp=n;
            while(tmp!=0)
            {
                a=tmp%10;
                s=s*10+a;
                tmp/=10;
            }
            sum=s+n;
            tmp1=sum;
            p=0;
            while(tmp1!=0)
            {
                a=tmp1%10;
                p=p*10+a;
                tmp1/=10;
            }
            c++;
            if(sum==p)
            {
                printf("%lld %lld\n",c,sum);
                break;
            }
            else n=sum;
        }
    }
    return 0;
}
