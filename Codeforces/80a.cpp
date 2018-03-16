#include<stdio.h>

int main()
{
    int n,m,x,i,j;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(i=n+1;i<=60;i++)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0) break;
            }
            if(i==j)
            {
                x=i;
                break;
            }
        }
        if(x==m) printf("YES\n");
        else printf("NO\n");
    }
}
