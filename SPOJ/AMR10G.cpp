#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,i,j,a[200000],mn;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        mn=2000000000;
            for(i=0,j=i+k-1;j<n;j++,i++)
            {
                k=abs(a[i]-a[j]);
                if(k<mn) mn=k;
            }

        printf("%d\n",mn);
    }

}
