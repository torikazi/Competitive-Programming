#include<bits/stdc++.h>
using namespace std;
long long a[300000];
int main()
{
    long long n,i,x,l,c,mx,ans,k,j;
    set<long long>s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    set<long long >:: iterator it;
    it=s.begin();
    x=*it;
    k=0;
    for(i=0,c=0,mx=0;i<n;i++)
    {
        if(a[i]==x)
        {
            k++;
            if(k==1)
            {
                for(j=n-1;j>=0;j--)
                {
                    if(a[j]==x) break;
                    else c++;
                }
            }
            if(c>mx){ mx=c;

            }
            c=0;
        }
        else c++;
    }
    ans=n*x+mx;
    cout<<ans;
}
