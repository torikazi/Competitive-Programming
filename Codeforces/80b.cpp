#include<stdio.h>
int main()
{
    double m,h,y,x;
    int H;
    while(scanf("%d:%lf",&H,&m)==2)
    {
        x=m*6;
        H=H%12;
        h=H;
        //printf("%lf \n",h);
        y=(h*5+(m/12))*6;
        if(y==360) y=0;
        if(y==(int)y) printf("%.0lf %.0lf\n",y,x);
        else printf("%.1lf %.0lf\n",y,x);
    }
    return 0;
}
