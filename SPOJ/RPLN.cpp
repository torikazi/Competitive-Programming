#include<bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx];
int tree[mx*3];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=min(tree[Left],tree[Right]);
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b) return INT_MAX;
    if(b>=i && e<=j) return tree[node];
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(Left,b,mid,i,j);
    int p2=query(Right,mid+1,e,i,j);
    return min(p1,p2);
}


int main()
{
    int i,j,t,cs=1,q,x,y,p,n;
    scanf("%d",&t);
    while(t--)
    {
        printf("Scenario #%d:\n",cs++);
        scanf("%d%d",&n,&q);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1,1,n);
        for(i=0;i<q;i++)
        {
                scanf("%d%d",&x,&y);
                printf("%d\n",query(1,1,n,x,y));

        }
    }

}
