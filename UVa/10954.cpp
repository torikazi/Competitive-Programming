#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,a[5005],i,j,b,s,sum;
    while(scanf("%lld",&n)==1)
    {
        s=0;
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
            printf("%lld ",a[i]);
        sum=a[0];
        for(i=1;i<n;i++)
        {
            sum+=a[i];
            s+=sum;
        }
        printf("%lld\n",s);
    }
    return 0;
}
