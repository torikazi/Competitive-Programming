#include<stdio.h>
#include<queue>
#include<string.h>
#include<iostream>
using namespace std;

int a[100005],n,k,next,cur;
queue<int>q;
void bfs()
{
     while(!q.empty())
     {
           cur=q.front();
          // cout<<cur<<" "<<a[cur]<<endl;
           q.pop();
           if(cur==k)  break;
           next=cur-1;
           if(next>=0&&a[next]==0)
           {
                   q.push(next);
                   a[next]=a[cur]+1;
           }
           next=cur+1;
           if(a[next]==0)
           {
                   q.push(next);
                   a[next]=a[cur]+1;
           }
           next=cur*2;
           if(next<=100000&&a[next]==0)
           {
                   q.push(next);
                   a[next]=a[cur]+1;
           }
     }

}
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(a,0,sizeof(a));
        if(n>k) cout<<(n-k)<<endl;
        else
        {
             while(!q.empty()) q.pop();
             q.push(n);
             bfs();
             cout<<a[k]<<endl;
        }
    }
    return 0;
}
