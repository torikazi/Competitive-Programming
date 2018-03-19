#include<stdio.h>
#include<algorithm>
using namespace std;
#define I64 long long int
int main()
{
    I64 a[100050]={0},b[100050]={0};
    int n,i,t,q,l,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=1;i<=n;i++)
    {
        a[i]=a[i-1]+a[i];
    }
    sort(b+1,b+n+1);
    for(i=1;i<=n;i++)
    {
        b[i]=b[i-1]+b[i];
    }
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        scanf("%d%d%d",&t,&l,&r);
        if(t==1)
            printf("%I64d\n",a[r]-a[l-1]);
        else
            printf("%I64d\n",b[r]-b[l-1]);
    }
}
