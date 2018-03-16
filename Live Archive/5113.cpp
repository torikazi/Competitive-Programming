#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,d,t,k,s,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&a,&d);
        k=a;
        s=0;
        for(i=1;i<=n;i++)
        {
            s+=k;
            k+=d;
        }
        printf("%d\n",s);
    }
}
