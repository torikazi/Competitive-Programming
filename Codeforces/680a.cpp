#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],i,tsum,ans;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+5);

    tsum=a[0]+a[1]+a[2]+a[3]+a[4];
    if(a[4]==a[3] && a[2]==a[3])
    {
        ans=a[0]+a[1];
    }
    else if(a[3]==a[2] && a[2]==a[1])
    {
        ans=a[0]+a[4];
    }
    else if(a[0]==a[1] && a[1]==a[2] && a[3]==a[4])
    {
        if(tsum-a[0]-a[1]-a[2]<tsum-a[3]-a[4])
        {
            ans=tsum-a[0]-a[1]-a[2];
        }
        else
            ans= tsum-a[3]-a[4];
    }
    else if(a[0]==a[1] && a[1]==a[2])
    {
        ans=tsum-a[0]-a[1]-a[2];
    }
    else if(a[4]==a[3])
    {
        ans=tsum-a[4]-a[3];
    }
    else if(a[3]==a[2])
    {
        ans=tsum-a[3]-a[2];
    }
     else if(a[2]==a[1])
    {
        ans=tsum-a[2]-a[1];
    }
     else if(a[1]==a[0])
    {
        ans=tsum-a[1]-a[0];
    }
    else ans=tsum;
    printf("%d\n",ans);
    fflush(stdout);
}
