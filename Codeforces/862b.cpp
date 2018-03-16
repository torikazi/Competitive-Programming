#include<bits/stdc++.h>
using namespace std;
int v[100005];
vector<int>a[100005];
void bfs(int x)
{
    int y,i;
    stack<int>s;
    s.push(x);
    v[x]=1;
    while(!s.empty())
    {
        y=s.top();
        s.pop();
        if(v[y]==1)
        {
            for(i=0;i<a[y].size();i++)
            {
                if(v[a[y][i]]==0)
                {
                    s.push(a[y][i]);
                    v[a[y][i]]=2;
                }
            }
        }
        else if(v[y]==2)
        {
            for(i=0;i<a[y].size();i++)
            {
                if(v[a[y][i]]==0)
                {
                    s.push(a[y][i]);
                    v[a[y][i]]=1;
                }
            }
        }
    }
    return;
}
int main()
{
    long long int n,i,x,y,o,t;
    cin>>n;
    for(i=0;i<=n;i++)
        v[i]=0;
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    bfs(1);
    //for(i=1;i<=n;i++) cout<<v[i]<<" ";
    o=t=0;
    for(i=1;i<=n;i++)
    {
        if(v[i]==1) o++;
        if(v[i]==2) t++;
    }
    cout<<(o*t)-n+1<<endl;
}
