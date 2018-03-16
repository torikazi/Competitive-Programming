#include<stdio.h>
int main()
{
    long long int n,a,b,c,i;
    while(scanf("%lld",&n)==1)
    {
        if(n<0) break;
        a=1;
        b=2;
        for(i=1;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%lld %lld\n",a-1,b-1);
    }
    return 0;
}
