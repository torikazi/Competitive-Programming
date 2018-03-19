#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s,k,cnt=0,x,q;
    vector<int>a;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    sort(a.begin(),a.end());
    cin>>q;
    //int mx;
    vector<int>::iterator mx;
    for(i=0;i<q;i++)
    {
        cin>>x;
        mx=upper_bound(a.begin(),a.end(),x);
        if(x<a[0]) cout<<0<<endl;
        else cout<<mx-a.begin()<<endl;
    }
}
