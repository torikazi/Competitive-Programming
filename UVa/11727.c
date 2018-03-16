#include<stdio.h>
int main()
{
    int T,a,b,c,i;
    scanf("%d",&T);
    for(i=1;i<=T&&T<20;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b&&a>=c)
        {
            if(b>=c) printf("Case %d: %d\n",i,b);
            else printf("Case %d: %d\n",i,c);
        }
        else if(b>=c&&b>=a)
        {
            if(a>=c) printf("Case %d: %d\n",i,a);
            else printf("Case %d: %d\n",i,c);
        }
        else if(c>=a&&c>=b)
        {
            if(a>=b) printf("Case %d: %d\n",i,a);
            else printf("Case %d: %d\n",i,b);
        }
    }
    return 0;
}
