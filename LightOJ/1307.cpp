#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,j,k,cnt,cs=1,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a;

        cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }

        sort(a.begin(),a.end());
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                x=a[i]+a[j];
                y=lower_bound(a.begin(),a.end(),x)-a.begin();
                //cout<<y<<" ";
                if(y-j-1>0) cnt+=(y-j-1);
            }
        }
        printf("Case %d: %d\n",cs++,cnt);
    }
}
