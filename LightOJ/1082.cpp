#include<bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx];
int tree[mx*3];
int init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return arr[b];
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=init(Left,b,mid);
    int p2=init(Right,mid+1,e);
    tree[node]=min(p1,p2);

    return tree[node];
}
int query(int node,int b,int e,int i,int j)
{
    if (i > e || j < b) return INT_MAX; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j) return tree[node]; //রিলেভেন্ট সেগমেন্ট
    int Left=node*2; //আরো ভাঙতে হবে
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(Left,b,mid,i,j);
    int p2=query(Right,mid+1,e,i,j);
    return min(p1,p2); //বাম এবং ডান পাশের যোগফল
}

int main()
{
    int n,x,y,q,t,i,cs=1;
    scanf("%d", &t);
    while(t--){
            printf("Case %d:\n",cs++);
    cin>>n>>q;
    for(i=1;i<=n;i++)
        cin>>arr[i];
    init(1,1,n);

    for(i=0;i<q;i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        printf("%d\n", query(1, 1, n, x, y));

    }
    }
    return 0;
}
