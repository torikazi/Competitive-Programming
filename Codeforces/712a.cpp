#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,x;
    int a[100005],b[100005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[n]=0;
    for(i=n-1;i>=0;i--)
    {
        b[i]=a[i]+a[i+1];
    }
    for(i=0;i<n;i++)
        printf("%d ",b[i]);

}
