#include<stdio.h>
int main()
{
    int n,i,t,q,d,ni,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        q=n/25;
        n=n-(q*25);
        d=n/10;
        n=n-(d*10);
        ni=n/5;
        n=n-(ni*5);
        p=n;
        printf("%d %d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S)\n",i,q,d,ni,p);
    }
}
