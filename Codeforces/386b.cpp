#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int n,a[1000],i,mx,k,b[1000],m,j;
    memset(b,0,sizeof(b));
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    sort(a,a+n);

    for(i=0,mx=0;i<n;i++)
    {
        for(j=i,k=0;j<n;j++)
        {
            if(a[j]-a[i]>m)
                break;
            k++;
        }
        mx=max(mx,k);

    }

    printf("%d\n",mx);

}
