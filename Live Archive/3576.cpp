#include<stdio.h>
typedef long long LL;
int main()
{
    LL N,w,d,t,ans,i,f;
    LL a;
    while(scanf("%lld%lld%lld%lld",&N,&w,&d,&t)==4)
    {
        f=0;
        a=(N*(N-1))/2;
        for(i=1;i<N;i++)
        {
            ans=(LL)(a*w)-(i*w)+(w-d)*i;
            if(ans==t)
            {
                f=1;
                printf("%lld\n",i);
                break;
            }
        }
        if(!f) printf("%lld\n",N);
    }
}
