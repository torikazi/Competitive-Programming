#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100009],i,j,mn,mx;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            mn=abs(a[i]-a[i+1]);
            mx=abs(a[i]-a[n-1]);
        }
        else if(i==n-1)
        {
            mn=abs(a[i]-a[i-1]);
            mx=abs(a[i]-a[0]);
        }
        else
        {
            mn=min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
            mx=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
        }
       printf("%d %d\n",mn,mx);

    }
}
