#include<bits/stdc++.h>
using namespace std;
int dr[]={0,0,1,-1};
int dc[]={-1,1,0,0};
int n,m;
char a[12][12];
int visited[12][12];
int s;
bool valid(int r,int c)
{
    if(r>=0&&r<n&&c>=0&&c<m&&!visited[r][c]&&a[r][c]=='P')
    {
        return true;
    }
    return false;
}
int floodfill(int u,int v)
{
    int r,c,k;
    visited[u][v]=1;
    for(k=0;k<4;k++)
    {
        r=u+dr[k];
        c=v+dc[k];
        if(valid(r,c))
        {
            s++;
            break;
            //floodfill(r,c);
        }
    }
}
int main()
{
    int i,j;
    scanf("%d%d",&n,&m);
    getchar();
    memset(visited,0,sizeof(visited));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]=='W')
                floodfill(i,j);
        }
    }
    printf("%d\n",s);
}
