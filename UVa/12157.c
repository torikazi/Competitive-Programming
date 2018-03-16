#include<stdio.h>
int main()
{
    int T,n,s[2000],i,j,miles,juice,x,y,t;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&t);
        miles=0;
        juice=0;
        for(j=0;j<t;j++)
        {
            scanf("%d",&s[j]);
            x=s[j]-29;
            y=s[j]-59;
            miles+=10;
            while(x>0)
            {
                miles+=10;
                x-=30;
            }
            juice+=15;
            while(y>0)
            {
                juice+=15;
                y-=60;
            }
        }
        if(miles==juice) printf("Case %d: Mile Juice %d\n",i,miles);
        else if(miles<juice) printf("Case %d: Mile %d\n",i,miles);
        if(miles>juice) printf("Case %d: Juice %d\n",i,juice);
    }
    return 0;
}
