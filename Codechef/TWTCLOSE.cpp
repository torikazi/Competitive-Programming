#include<bits/stdc++.h>
int main()
{
    int n,c,m,a[20000],i,cnt;
    memset(a,0,sizeof(a));
    char s[20];
    scanf("%d%d",&n,&c);
    while(c--)
    {
        scanf("%s",s);
        if(strcmp(s,"CLICK")==0){
            scanf("%d",&m);
            if(a[m]==0) a[m]++;
            else a[m]--;
            for(i=1,cnt=0;i<=n;i++)
            {
                if(a[i]==1) cnt++;
            }
            printf("%d\n",cnt);
        }
        else
        {
            for(i=1;i<=n;i++)
                a[i]=0;
            printf("0\n");
        }
    }
}
