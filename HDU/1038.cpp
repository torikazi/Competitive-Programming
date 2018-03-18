#include<stdio.h>
int main()
{
    double a,b,c,x,y;
    int i=1;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        if(b==0) break;
        x=(1.0/63360.0)*a*b*3.1415927;
        y=x*3600.0/c;
        printf("Trip #%d: %.2lf %.2lf\n",i++,x,y);
    }
    return 0;
}
