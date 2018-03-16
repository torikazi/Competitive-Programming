#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,q,i,a[10090],cs,j,f,x;
    cs=1;
    while(scanf("%d%d",&n,&q)==2)
    {
        if(n==0 && q==0 ) break;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a+1,a+n+1);
        printf("CASE# %d:\n",cs);
        cs++;
        for(i=1;i<=q;i++)
        {
            scanf("%d",&x);

            for(j=1,f=0;j<=n;j++)
            {
                if(a[j]==x)
                {
                    printf("%d found at %d\n",x,j);
                    f=1;
                    break;
                }
            }
            if(!f) printf("%d not found\n",x);
        }
    }
}
