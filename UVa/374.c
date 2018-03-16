#include<stdio.h>
#include<math.h>
int main()
{
    long long int R,B,P,M;
    while(scanf("%lld%lld%lld",&B,&P,&M)==3)
    {
        R=pow(B,P);
        R=R%M;
        printf("%lld\n",R);
    }
    return 0;
}
