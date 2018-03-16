#include<stdio.h>
int main()
{
    double r,n,a;
    while(scanf("%lf%lf",&r,&n)==2)
    {
        a=3.1415926*r*r;
        printf("%.3lf\n",a);
    }
    return 0;
}
