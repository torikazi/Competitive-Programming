#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        n=2*n-(n/2);
        printf("%lld\n",n);
    }
    return 0;
}
