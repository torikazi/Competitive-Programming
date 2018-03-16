#include<stdio.h>
int main()
{
    int T,N,R,D,x,i=1;
    while(scanf("%d%d",&R,&N)==2&&N!=0&&R!=0)
    {
        D=0;
        x=N;
        while(x<R)
        {
            x+=N;
            D++;
            if(D>26) break;
        }
        if(D>26) printf("Case %d: impossible\n",i);
        else printf("Case %d: %d\n",i,D);
        i++;
    }
}
