#include<stdio.h>
int main()
{
    long long int n,sum;
    while(scanf("%lld",&n)==1)
    {
        sum+=n;
        if(n==0) break;
    }
    printf("%lld\n",sum);
    return 0;
}
