#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)
int main()
{
    int D,L,T,i;
    double x,y,area;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&D,&L);
        x=L/2.0;
        y=sqrt(((L/2.0)*(L/2.0))-((D/2.0)*(D/2.0)));
        area=x*y*PI;
        printf("%.3lf\n",area);
    }
    return 0;
}
