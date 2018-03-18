#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,ans,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
            m=sqrt(n);
            for(i=m;i>=1;i--)
            {
                k=n/i;
                if(n%i==0)
                {
                    printf("%d\n",abs(k-i));
                    break;
                }
            }

    }
}
