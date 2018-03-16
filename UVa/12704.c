#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,r,z;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf",&x,&y,&r);
        z=sqrt(x*x+y*y);
        printf("%.2lf %.2lf\n",r-z,r+z);
    }
    return 0;
}
