#include<bits/stdc++.h>
int dr[]={0,0,1,-1,1,1,-1,-1};
int dc[]={-1,1,0,0,-1,1,-1,1};
int a[600][600];
int visited[600][600];
int cs=1;

int rr[600][600];
int r,c,q,s,n,m;
bool valid(int r,int c)
{
      if(r>=0 &&r<n && c>=0 && c<m && !visited[r][c] && a[r][c]!='#')
            return true;
      return false;
}

int floodfill(int u,int v)
{
      int k;
      if(a[u][v]=='C') s++;
      visited[u][v]=1;
      for(k=0;k<4;k++)
      {
            r=u+dr[k];
            c=v+dc[k];
            if(valid(r,c)) floodfill(r,c);
      }

}

int fll(int u,int v)
{
      int k;
      visited[u][v]=1;
      rr[r][c]=s;
      for(k=0;k<4;k++)
      {
            r=u+dr[k];
            c=v+dc[k];
            if(valid(r,c))
            {
                  fll(r,c);
            }
      }

}
int main()
{
      int t,i,j,x,y;
      scanf("%d",&t);
      while(t--)
      {
            scanf("%d%d%d",&n,&m,&q);
            getchar();
            for(i=0;i<n;i++)
            {
                  for(j=0;j<m;j++)
                  {
                        scanf("%c",&a[i][j]);
                  }
                  getchar();
            }
            memset(rr,-1,sizeof(rr));
            printf("Case %d:\n",cs++);
            for(i=0;i<q;i++)
            {
                  scanf("%d%d",&x,&y);
                  s=0;
                  x--;
                  y--;
                  if(rr[x][y]!=-1)
                        printf("%d\n",rr[x][y]);
                  else{
                        memset(visited,0,sizeof(visited));
                        floodfill(x,y);
                  memset(visited,0,sizeof(visited));
                  fll(x,y);

                  printf("%d\n",s);
                  }
            }


      }
}
