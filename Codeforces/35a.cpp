#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,a[5],i,x,y;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    a[2]=2;
    a[3]=3;
    scanf("%d%d",&x,&y);
    swap(a[x],a[y]);
    scanf("%d%d",&x,&y);
    swap(a[x],a[y]);
    scanf("%d%d",&x,&y);
    swap(a[x],a[y]);
    for(i=1;i<=3;i++)
    {
        if(a[i]==n)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
