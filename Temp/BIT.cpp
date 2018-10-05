#include<bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx];
int tree[mx*3];
int n;
int update(int idx, int x) //n is the size of the array, x is the number to add
{
       while(idx<=n)
       {
             tree[idx]+=x;
             idx += idx & (-idx);
       }
}
int query(int idx)
{
       int sum=0;
       while(idx>0)
       {
             sum+=tree[idx];
             idx -= idx & (-idx);
       }
       return sum;

}
int main()
{
    int i,j,t,cs=1,q,x,y,p;
    scanf("%d",&t);
    while(t--)
    {
        printf("Case %d:\n",cs++);
        scanf("%d%d",&n,&q);
        memset(tree,0,sizeof(tree));
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
            update(i,arr[i]);
        }

        for(i=0;i<q;i++)
        {
            scanf("%d",&p);
            if(p==1) //arr[x]=0
            {
                scanf("%d",&x);
                x++;
                printf("%d\n",arr[x]);
                update(x,-arr[x]);
            }
            else if(p==2) //arr[x]=val;
            {
                scanf("%d%d",&x,&y);
                x++;
                update(x,y);
                arr[x]+=y;
            }
            else if(p==3)//sum of aar[x] to arr[y]
            {
                scanf("%d%d",&x,&y);
                x++;y++;
                printf("%d\n",query(y)-query(x-1));

            }

        }
    }
    return 0;

}

