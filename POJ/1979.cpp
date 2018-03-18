#include<stdio.h>
int visited[30][30];
int cnt;
int n,m;
char a[30][30];
int valid(int r,int c)
{
    if(r<m&&r>=0&&c<n&&c>=0) return true;
    return false;
}
void bfs(int r,int c)
{
    visited[r][c]=1;
    cnt++;
    if(valid(r+1,c)&&a[r+1][c]=='.'&&!visited[r+1][c])
    {
        bfs(r+1,c);
    }
    if(valid(r-1,c)&&a[r-1][c]=='.'&&!visited[r-1][c])
    {
        bfs(r-1,c);
    }
    if(valid(r,c+1)&&a[r][c+1]=='.'&&!visited[r][c+1])
    {
        bfs(r,c+1);
    }
    if(valid(r,c-1)&&a[r][c-1]=='.'&&!visited[r][c-1])
    {
        bfs(r,c-1);
    }
}
int main()
{
    int i,j,x,y;
    while(scanf("%d%d",&n,&m)==2)
    {
        getchar();
        if(m==0&&n==0) break;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                visited[i][j]=0;
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%c",&a[i][j]);
                if(a[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
            getchar();
        }
        cnt=0;
        bfs(x,y);
        printf("%d\n",cnt);
    }
return 0;
}
