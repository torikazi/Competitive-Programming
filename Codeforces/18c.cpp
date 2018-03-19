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
    tree[node]=tree[Left]+tree[Right];
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b) return 0;
    if(b>=i && e<=j) return tree[node];
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(Left,b,mid,i,j);
    int p2=query(Right,mid+1,e,i,j);
    return p1+p2;
}

void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e||i<b) return;
    if(b>=i&&e<=i)
    {
        tree[node]=newvalue;
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    update(Left,b,mid,i,newvalue);
    update(Right,mid+1,e,i,newvalue);
    tree[node]=tree[Left]+tree[Right];
}
int main()
{
    int i,j,t,cs=1,q,x,y,p,n,cnt;


        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1,0,n-1);
        int low=0;
        int high=n-1;
        cnt=0;
        for(i=0;i<n-1;i++)
        {
            x=query(1,0,n-1,low,i);
            y=query(1,0,n-1,i+1,high);
           // printf("%d %d %d\n",i,x,y);
            if(x==y) cnt++;
        }
        printf("%d\n",cnt);
    }
