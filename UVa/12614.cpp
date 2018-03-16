#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,j,a[100000];
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        printf("Case %d: %d\n",j,a[n-1]);
    }
    return 0;
}
