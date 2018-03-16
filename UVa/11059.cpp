#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[30],t,i;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+i);
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }
}
