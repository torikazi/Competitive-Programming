#include<stdio.h>
int main()
{
    int a,t,n,d,i,res[10000],e;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        d=1;
       for(i=1;i<=n;i++)
       {
           d=d*i;
       }
        printf("%d\n",d);
    }
}
