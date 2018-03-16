#include<stdio.h>
int main()
{
    int n,a[5000],i,m;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        a[0]=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n+1);
        for(i=1,m=0;i<=n;i++)
        {
            if(a[i]-a[i-1]>200)
            {
                m=1;
                break;
            }
        }
        if(m==1) printf("IMPOSSIBLE\n");
        else
        {
            if(2*(1422-a[n])>200) printf("IMPOSSIBLE\n");
            else printf("POSSIBLE\n");
        }
    }
    return 0;
}
