#include<stdio.h>
#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int main()
{
    int n,e,f,x,y,u,v,i;

    int color[100005];
    //int visited[100005];
    while(1)
    {
        cin>>n;
        if(n==0) break;
        vector<int>a[100000];
        memset(color,0,sizeof(color));
        cin>>e;
        while(e--)
        {
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        queue<int>q;
        q.push(0);
        color[0]=1;
        f=1;
        while(!q.empty() &&f)
        {
            u=q.front();
            q.pop();
            for(i=0;i<a[u].size();i++){
                v=a[u][i];
                if(color[v]==0)
                {
                    if(color[u]==1) color[v]=2;
                    else color[v]=1;
                    q.push(v);
                }
                else if(color[u]==color[v])
                {
                    f=0;
                    break;
                }
            }
        }
        if(!f) printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");
    }



}
