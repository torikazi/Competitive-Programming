#include<stdio.h>
int isprime(int n)
{
    int i,f=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1) return 1;
    else return 0;
}
int main()
{
    int n,i,c;
    while(scanf("%d",&n)==1)
    {
        c=0;
        for(i=2;;i++)
        {
            if(isprime(i)==0&&isprime(i+2)==0) c++;
            if(c==n) break;
        }
        printf("(%d, %d)\n",i,i+2);
    }
    return 0;
}
