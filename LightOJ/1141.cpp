#include<iostream>
#include<cstring>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

int INF=0x3f3f3f3f;
int d[10000];
int p[10000];

void prime()
{
    int i,j;
    memset(p,0,sizeof(p));
    for(i=2;i*i<10000;i++)
    {
        if(p[i]==0)
            for(j=i*2;j<10000;j+=i)
                p[j]=1;
    }
}

void bfs(int a, int b)
{
    int i,j;
    queue<int>q;
    memset(d,INF,sizeof d);
    q.push(a);
    d[a]=0;
    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        if(v==b) return;
        for(i=2;i<v;i++){
            if(v%i==0 && p[i]==0)
            {
                if(v+i>b) break;
                if(d[v+i]>d[v]+1)
                {
                    d[v+i]=d[v]+1;
                    q.push(v+i);
                }
            }
        }
    }
}
int main()
{
    int t, a, b,cs=1;
    prime();
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        bfs(a,b);
        if(d[b]!=INF)
            printf("Case %d: %d\n",cs++,d[b]);
        else
            printf("Case %d: %d\n",cs++, -1);
    }
    return 0;
}
