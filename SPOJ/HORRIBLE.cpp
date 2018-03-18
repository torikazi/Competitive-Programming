#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
#define mx 1000001
#define i64 long long
i64 arr[mx];

struct info
{
    i64 prop,sum;
} tree[mx*3];

void update(i64 node,i64 b,i64 e,i64 i,i64 j,i64 x)
{
    if (i > e || j < b) return;
    if (b >= i && e <= j)
    {
        tree[node].sum+=((e-b+1)*x);
        tree[node].prop+=x;
        return;
    }
    i64 Left=node*2;
    i64 Right=(node*2)+1;
    i64 mid=(b+e)/2;
    update(Left,b,mid,i,j,x);
    update(Right,mid+1,e,i,j,x);
    tree[node].sum=tree[Left].sum+tree[Right].sum+(e-b+1)*tree[node].prop;

}
i64 query(i64 node,i64 b,i64 e,i64 i,i64 j,i64 carry=0)
{
    if (i > e || j < b) return 0;

    if(b>=i and e<=j) return tree[node].sum+carry*(e-b+1);

    i64 Left=node<<1;
    i64 Right=(node<<1)+1;
    i64 mid=(b+e)>>1;

    i64 p1 = query(Left, b,mid, i, j, carry+tree[node].prop);
    i64 p2 = query(Right, mid+1, e, i, j,carry+tree[node].prop);

    return p1+p2;

}
int main()
{
    i64 t,n,q,i,x,y,p,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        memset(arr,0,sizeof(arr));
        memset(tree,0,sizeof(tree));
        while(q--)
        {
            cin>>p;
            if(p==0)
            {
                cin>>x>>y>>z;
                update(1,1,n,x,y,z);
            }
            else
            {
                cin>>x>>y;
                cout<<query(1,1,n,x,y)<<endl;
            }
        }
    }
}
