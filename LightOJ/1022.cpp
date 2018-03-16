#include<bits/stdc++.h>
#define pi acos(-1.0)
int main()
{
    int t,i;
    double r,a,b,ans;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        a=(2*r)*(2*r);
        b=pi*r*r;
        ans=a-b;
        printf("Case %d: %.2lf\n",i,ans);
    }
}
