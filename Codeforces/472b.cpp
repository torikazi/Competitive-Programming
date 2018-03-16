#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,t,p,a[3000],m;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    m=0;
    p=n;
    t=0;
    while(p)
    {
        t+=2*((a[p-1])-1);
        if(k<p)
        {
            p=p-k;
        }
        else
        {
            p=0;
        }
    }
    printf("%d\n",t);
}
