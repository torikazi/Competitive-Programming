#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
int a[200050];
int main()
{
    int n,i,d,c,mn,mx;
    LL w,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    d=a[n-1]-a[0];
    mn=a[0];
    mx=a[n-1];

    for(i=0,x=0,y=0;i<n;i++)
    {
        if(a[i]==mn) x++;
        else if(a[i]==mx) y++;
    }
    if(mn==mx&&n%2==0)
        w=(LL)(n/2)*(n-1);
    else if(mn==mx&&n%2!=0)
        w=(LL)((n-1)/2)*n;
    else w=(LL)x*y;
    cout<<d<<" "<<w<<endl;
}
