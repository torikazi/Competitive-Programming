#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,a[30],i,sum,x;
    scanf("%d",&t);
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=1,sum=0;i<n;i++)
        {
            x=a[i-1]-a[i];
            if(x<0) x*=-1;
            sum+=x;
        }
        x=a[0]-a[n-1];
        if(x<0) x*=-1;
        sum+=x;
        printf("%d\n",sum);
        t--;
    }
    return 0;
}
