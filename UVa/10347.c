#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,s,i;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        x=s*(s-a)*(s-b)*(s-c);
        if(x>0)
        {
            x=4.0*sqrt(x)/3.0;
            printf("%.3lf\n",x);
        }
        else
        {
            x=-1;
            printf("%.3lf\n",x);
        }
    }
    return 0;
}
