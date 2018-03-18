#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,k,c,i,s,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&k,&c);
        for(i=0,s=0;i<k;i++)
        {
            scanf("%lld",&n);
            s+=n;
        }

        if(s<=c) printf("Yes\n");
        else printf("No\n");
    }
}
