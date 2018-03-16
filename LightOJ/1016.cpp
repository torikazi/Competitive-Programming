#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y[50009],w,i,j,k,s,cnt,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&w);
        for(i=0;i<n;i++)
            scanf("%d%d",&x,&y[i]);
        sort(y,y+n);

        for(i=0,s=0,cnt=0;i<n;i++)
        {
            k=i;
            for(j=i+1;j<n;j++)
            {
                if(y[j]<=y[k]+w) i++;
                else break;
            }
            cnt++;
        }
        printf("Case %d: %d\n",cs++,cnt);
    }

}
