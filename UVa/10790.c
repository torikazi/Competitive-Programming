#include<stdio.h>
int main()
{
    long long int a,b,i,x,y;
    for(i=1;scanf("%lld%lld",&a,&b)==2&&a!=0&&b!=0;i++)
    {
        x=a*(a-1)/2;
        y=b*(b-1)/2;
        printf("Case %lld: %lld\n",i,x*y);
    }
    return 0;
}
