#include<stdio.h>

long long fact(long long n,long long m)
{
    long long r=1,i,j;

    if(n-m<m) m=n-m;

    for(i=1,j=n;i<=m;i++,j--){
        r=r*j;
        r=r/i;
    }
    return r;
}

int main(){

    long long n,m;
    while(scanf("%lld%lld",&n,&m)==2)
    {

        if(n==0&&m==0) break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,fact(n,m));
    }
    return 0;
}
