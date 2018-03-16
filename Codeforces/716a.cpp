#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c,a[100005],cnt;
    cin>>n>>c;
    for(i=0;i<n;i++)
        cin>>a[i];
    cnt=1;
    for(i=n-2;i>=0;i--,cnt++)
    {
       // cout<<a[i+1]-a[i]<<endl;
        if(a[i+1]-a[i]>c) break;
    }
    cout<<cnt<<endl;
}
