#include<stdio.h>
#include<math.h>
int main()
{
    double d,v,u,x,y,a;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",&d,&v,&u);
        printf("Case %d: ",i);
        if(v>=u) printf("can't determine\n");
        else
        {
            x=d/u;
            y=d/sqrt(u*u-v*v);
            a=fabs(x-y);
            if(x==y) printf("can't determine\n");
            else printf("%.3lf\n",a);
        }
    }
    return 0;
}
