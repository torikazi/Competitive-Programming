#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,h,k,a[100005],cnt,s,c,i;
    cin>>n>>h>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    i=0;
    s=0;
    cnt=0;
    while(i<=n)
    {
        while(s+a[i]<=h){
            s=s+a[i];
            i++;
            if(i>=n ) break;
        }
        //printf("%d--%d\n",s,i);
        if(s<k && s)
        {
            cnt++;
            s=0;
        }
        else
        {
            c=s/k;
            cnt+=c;
            s=s-k*c;
        }
        //printf("cnt=%d\n",cnt);
    }
    cout<<cnt;
}
