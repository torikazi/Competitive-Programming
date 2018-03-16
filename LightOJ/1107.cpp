#include<bits/stdc++.h>
int main()
{
    int t,a,b,c,d,x,y,cs=1,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        scanf("%d",&m);
        printf("Case %d:\n",cs++);
        while(m--)
        {
            scanf("%d%d",&x,&y);
            if(x<=c &&x>=a && y<=d &&y>=b) printf("Yes\n");
            else printf("No\n");
        }
    }
}
