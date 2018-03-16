#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int visited[1005][1005];
int s,n,m;
bool valid(int r,int c)
{
    if(r>=1&&r<=n&&c>=1&&c<=m ) return true;
    return false;
}
int floodfill(int u,int v)
{
    if(valid(u,v) && visited[u][v]&& visited[u+1][v] && visited[u][v+1]&& visited[u+1][v+1]) return true;
    if(valid(u,v) && visited[u][v]&& visited[u-1][v] && visited[u-1][v+1]&& visited[u][v+1]) return true;
    if(valid(u,v) && visited[u][v]&& visited[u-1][v] && visited[u-1][v-1]&& visited[u][v-1]) return true;
    if(valid(u,v) && visited[u][v]&& visited[u][v-1] && visited[u+1][v-1]&& visited[u+1][v]) return true;
    return false;
}
int main()
{
    int k,x,y,ans=0,f=1,i;
    bool hh=false;
    scanf("%d%d%d",&n,&m,&k);
    memset(visited,0,sizeof(visited));
    for(i=0;i<k;i++)
    {
        scanf("%d%d",&x,&y);
        visited[x][y]=1;
        hh=floodfill(x,y);
        if(hh==true && f)
        {
            f=0;
            ans=i+1;
        }
    }
    printf("%d\n",ans);
}
