#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.00)
int main()
{
    double r1,r2,r3,area,ar,x,y,z,ab,bc,ca,s,r,a,b,c;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;
        ab=acos((a*a+b*b-c*c)/(2*a*b));
        bc=acos((c*c+b*b-a*a)/(2*c*b));
        ca=acos((a*a+c*c-b*b)/(2*a*c));
        x=.5*ab*r1*r1;
        y=.5*bc*r3*r3;
        z=.5*ca*r2*r2;
        s=(a+b+c)/2;
        ar=(sqrt(s*(s-a)*(s-b)*(s-c)));
        area=ar-x-y-z;
        printf("Case %d: %.8lf\n",i,area);
    }
}
