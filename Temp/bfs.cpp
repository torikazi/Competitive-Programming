
#include<bits/stdc++.h>
using namespace std;

vector<int>graph[21];

void bfs(int s, int d)
{
    queue< int >q;
    int visited[50]={0}, level[50];
    visited[s]=1;
    level[s]=0;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        for(int l=0; l<graph[u].size(); l++)
        {
            int v = graph[u][l];
            if(!visited[v])
            {
                visited[v]=1;
                level[v] = level[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
   printf("%2d to %2d: %d\n", s, d, level[d]);
}
