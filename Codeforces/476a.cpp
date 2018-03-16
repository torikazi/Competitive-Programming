#include<bits/stdc++.h>
int main()
{
    int n,m,ans,mod,f;
    scanf("%d%d",&n,&m);
    if(n==0) printf("-1\n");
    else
    {
        ans=n/2;
        mod=n%2;
        ans=ans+mod;
        f=1;
        while(f&&ans<=n)
        {
            if(ans%m==0) f=0;
            else ans++;
        }
        if(!f) printf("%d\n",ans);
        else printf("-1\n");

    }
}
