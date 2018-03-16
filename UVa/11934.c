#include<stdio.h>
int main()
{
    long long int a,b,c,d,L,count,x,sum;

    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&L)==5)
    {
        count=0;
        if(a==0&&b==0&&c==0&&d==0&&L==0) break;
        for(x=0;x<=L;x++)
        {
            sum=(a*x*x)+(b*x)+c;
            if(sum%d==0) count++;
        }
        printf("%lld\n",count);
    }

    return 0;
}
