#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,x,y,ans,f,s,mx;
    scanf("%d%d",&n,&s);
    s=s*100;
    for(i=0,mx=-1,f=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        x=x*100+y;
        ans=-1;
        if(s>=x)
        {
            ans=(100-y)%100;
        }
        mx=max(mx,ans);
    }
    printf("%d\n",mx);
}
