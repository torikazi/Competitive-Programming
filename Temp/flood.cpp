#include<bits/stdc++.h>
using namespace std;
int dr[]={0,0,1,-1,1,1,-1,-1};
int dc[]={-1,1,0,0,-1,1,-1,1};
int a[50][50],s,n,m;
int visited[50][50];
bool valid(int r,int c)
{
    if(r>=0 && r<n && c>=0 && c<m &&!visited[r][c] && a[r][c]==1)
        return true;
    return false;
}
void flood(int u,int v)
{
    int k,r,c;
    s++;
    visited[u][v]=1;
    for(k=0;k<8;k++)
    {
        r=u+dr[k];
        c=v+dc[k];
        if(valid(r,c)) flood(r,c);
    }
}
int main()
{
    int i,j,mx;
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    for(i=0,mx=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            s=0;
            memset(visited,0,sizeof(visited));
            if(valid(i,j)) flood(i,j);
            mx=max(mx,s);
        }
    }
    cout<<mx<<endl;
}
