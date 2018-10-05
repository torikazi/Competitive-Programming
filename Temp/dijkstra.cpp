#include <bits/stdc++.h>

using namespace std;

struct item_t{
    int u, w, lvl;

    bool operator< (const item_t& b) const{
        return w > b.w;
    }
};

vector<item_t> graph[1010];
int visited[1010];
int cost[1010][2];

void dijkstra(int src, int dest)
{
    priority_queue<item_t> que;
    que.push({src, 0, 0});
    while(!que.empty()){
        int u = que.top().u;
        int w = que.top().w;
        int lvl = que.top().lvl;
        que.pop();
        if(cost[u][lvl] == -1 || w < cost[u][lvl]){
            cost[u][lvl] = w;
            for(auto it: graph[u]) que.push({it.u, w + it.w, lvl ^ 1});
        }
    }
}

int main()
{
    //freopen("input.txt", "r", stdin);
    for(int cs = 1; ; cs++){
        memset(graph, 0, sizeof(graph));
        memset(visited, -1 ,sizeof(visited));
        memset(cost, -1, sizeof(cost));
        int n, m;
        if(scanf("%d%d", &n, &m) == EOF) break;
        for(int i = 0; i < m; i++){
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }
        dijkstra(0, n - 1);
        printf("Set #%d\n", cs);
        if(cost[n - 1][0] != -1){
            printf("%d\n", cost[n - 1][0]);
        }
        else{
            printf("?\n");
        }
    }
}
