#include<stdio.h>
int main()
{
    long long int t,i=0,N;
    double n;
    scanf("%lld",&t);
    while(scanf("%lf",&n)==1)
    {
        i++;
        if(n<=180000) n=0;
        else if(n>180000&&n<=480000)
        {
            n=(n-180000)*.10;
        }
        else if(n>480000&&n<=880000)
        {
            n=30000+(n-480000)*.15;
        }
        else if(n>880000&&n<=1180000)
        {
            n=90000+(n-880000)*.20;
        }
        else if(n>1180000)
        {
            n=150000+(n-1180000)*.25;
        }
        if(n<2000&&n>0) n=2000;
        N=n;
        if(N==n) printf("Case %lld: %lld\n",i,N);
        else printf("Case %lld: %lld\n",i,N+1);
        if(i==t) break;
    }
    return 0;
}
