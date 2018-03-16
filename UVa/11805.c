#include<stdio.h>
int main()
{
    int T,N,K,P,i,a,b;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&N,&K,&P);
        a=K+P;
        b=a%N;
        if(b==0) b=N;
        printf("Case %d: %d\n",i,b);
    }
    return 0;
}
