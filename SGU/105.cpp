#include<stdio.h>
int main()
{
    long long int n,x,s;
    while(scanf("%lld",&n)==1)
    {
        n=(n*2)/3;
        printf("%lld\n",n);
    }
    return 0;
}
