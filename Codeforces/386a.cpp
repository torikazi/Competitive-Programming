#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[10000],i,mx,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1,mx=0;i<=n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            k=i;
        }
    }
    sort(a+1,a+n+1);
    printf("%d %d\n",k,a[n-1]);

}
