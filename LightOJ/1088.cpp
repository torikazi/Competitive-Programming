#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1,i,m,n,x,y;

    scanf("%d",&t);
    while(t--)
    {
        printf("Case %d:\n",cs++);
        vector<int>v;
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&x,&y);
            printf("%d\n",upper_bound(v.begin(),v.end(),y)-lower_bound(v.begin(),v.end(),x));
        }
    }
}
