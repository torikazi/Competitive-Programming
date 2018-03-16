#include<stdio.h>
int main()
{
    int n,m,x,y,z,ans;
    scanf("%d%d",&n,&m);
    ans=n;
    while(n>=m)
    {
        x=n/m;
        ans+=x;
        y=n%m;
        n=(x+y);
    }
    printf("%d\n",ans);
}
