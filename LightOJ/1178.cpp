#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double a,b,c,d,m,tr,h,s,area;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        m=fabs(a-c);
        s=(m+b+d)/2.0;
        tr=sqrt(s*(s-m)*(s-b)*(s-d));
        h=2*tr/m;
        area=.5*h*(a+c);
        printf("Case %d: %.10lf\n",i,area);
    }
}
