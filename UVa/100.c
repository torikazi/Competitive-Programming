#include<stdio.h>

int prob(long long int i)
{
    int c=1;
    while(i>1)
    {
        if(i%2!=0) i=3*i+1;
        else i=i/2;
        c++;
    }
    return c;
}
int main()
{
    long long int x,y,a,b,i,n,max;
    while(scanf("%lld%lld",&x,&y)==2)
    {
        if(x<y){
            a=x;
            b=y;
        }
        else{
            a=y;
            b=x;
        }
        max=1;
        for(i=a;i<=b;i++)
        {
            n=prob(i);
            if(n>max) max=n;
        }
        printf("%lld %lld %lld\n",x,y,max);
    }
    return 0;
}
