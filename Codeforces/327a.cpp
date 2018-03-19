#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[1000],i,j,mx,k,cnt;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,mx=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            cnt=0;
            for(k=0;k<i;k++)
            {
                if(a[k]==1) cnt++;
            }
            for(k=i;k<=j;k++)
            {
                if(a[k]==0)
                    cnt++;
            }
            for(k=j+1;k<n;k++)
            {
                if(a[k]==1) cnt++;
            }
            mx=max(mx,cnt);
        }
    }
    printf("%d\n",mx);
}
