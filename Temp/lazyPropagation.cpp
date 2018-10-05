#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
#define mx 100001
#define i64 long long
i64 arr[mx];

struct info
{
    i64 prop,sum;
}tree[mx*3]; //sum ছাড়াও নিচে অতিরিক্ত কত যোগ হচ্ছে সেটা রাখবো prop এ

void update(i64 node,i64 b,i64 e,i64 i,i64 j,i64 x)
{
    if (i > e || j < b) return;
    if (b >= i && e <= j) //নোডের রেঞ্জ আপডেটের রেঞ্জের ভিতরে
    {
        tree[node].sum+=((e-b+1)*x); //নিচে নোড আছে e-b+1 টি, তাই e-b+1 বার x যোগ হবে এই রেঞ্জে
        tree[node].prop+=x; //নিচের নোডগুলোর সাথে x যোগ হবে
        return;
    }
    i64 Left=node*2;
    i64 Right=(node*2)+1;
    i64 mid=(b+e)/2;
    update(Left,b,mid,i,j,x);
    update(Right,mid+1,e,i,j,x);
    tree[node].sum=tree[Left].sum+tree[Right].sum+(e-b+1)*tree[node].prop;
    //উপরে উঠার সময় পথের নোডগুলো আপডেট হবে
    //বাম আর ডান পাশের সাম ছাড়াও যোগ হবে নিচে অতিরিক্ত যোগ হওয়া মান
}

i64 query(i64 node,i64 b,i64 e,i64 i,i64 j,i64 carry=0)
{
    if (i > e || j < b) return 0;

    if(b>=i and e<=j) return tree[node].sum+carry*(e-b+1); //সাম এর সাথে যোগ হবে সেই রেঞ্জের সাথে অতিরিক্ত যত যোগ করতে বলেছে সেটা

    i64 Left=node<<1;
    i64 Right=(node<<1)+1;
    i64 mid=(b+e)>>1;

    i64 p1 = query(Left, b,mid, i, j, carry+tree[node].prop); //প্রপাগেট ভ্যালু বয়ে নিয়ে যাচ্ছে carry ভ্যারিয়েবল
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

