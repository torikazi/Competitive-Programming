#include<bits/stdc++.h>
int main()
{
    double ox,oy,ax,ay,bx,by,area,r,alfa,a;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);
        r=sqrt((ox-ax)*(ox-ax) + (oy-ay)*(oy-ay));
        a=sqrt((bx-ax)*(bx-ax) + (by-ay)*(by-ay));

        alfa=(2*r*r-a*a)/(2*r*r);
        alfa=acos(alfa);

        if(alfa > 180) alfa=360-alfa;
        area= r*alfa;

        printf("Case %d: %lf\n",i,area);

    }
}
