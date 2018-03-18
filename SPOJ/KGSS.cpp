#include<bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx];
struct x{
    int val,idx;
}tree[mx*3],k;
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].val=arr[b];
        tree[node].idx=b;
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    if(tree[Left].val>tree[Right].val)
    {
        tree[node].val=tree[Left].val;
        tree[node].idx=tree[Left].idx;
    }
    else
    {
        tree[node].val=tree[Right].val;
        tree[node].idx=tree[Right].idx;
    }
}

x query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b) return {-1,-1};
    if(b>=i && e<=j) return tree[node];
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    x p1=query(Left,b,mid,i,j);
    x p2=query(Right,mid+1,e,i,j);
    if(p1.val>p2.val)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}

void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e||i<b) return;
    if(b>=i&&e<=i)
    {
        tree[node].val=newvalue;
        tree[node].idx=i;
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    update(Left,b,mid,i,newvalue);
    update(Right,mid+1,e,i,newvalue);
    if(tree[Left].val>tree[Right].val)
    {
        tree[node].val=tree[Left].val;
        tree[node].idx=tree[Left].idx;
    }
    else
    {
        tree[node].val=tree[Right].val;
        tree[node].idx=tree[Right].idx;
    }
}
int main()
{
    int i,j,t,cs=1,q,xx,y,n,s;
    char p;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        scanf("%d",&q);
        init(1,1,n);
        for(i=0;i<q;i++)
        {
            cin>>p>>xx>>y;
            if(p=='U')
            {
                update(1,1,n,xx,y);
            }
            else if(p=='Q')
            {
                x k=query(1,1,n,xx,y);
                update(1,1,n,k.idx,-1);
                x kk=query(1,1,n,xx,y);
                update(1,1,n,k.idx,k.val);
                printf("%d\n",k.val+kk.val);
            }
        }

}
