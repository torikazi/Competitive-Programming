#include<stdio.h>
int main()
{
    long long int n,i,a[10000],b;
    while(scanf("%lld",&n)==1)
    {
        if(n<0) break;
        while(1)
        {
            b=n%2;
            a[i]=b;
            n/=2;
            i++;
        }
        for(;i>=1;i--)
        {
            printf("%lld",a[i]);
        }
        printf("\n");
    }
    return 0;
}
