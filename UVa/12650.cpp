#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int r,n,a[100000],i,j;
    while(scanf("%d%d",&r,&n)==2)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n+1);
        for(i=1,j=1;i<=r;i++)
        {
            if(a[j]==i)
            {
                j++;
            }
            else printf("%d ",i);
        }
        if(j==i) printf("*");
        printf("\n");
    }
    return 0;
}
