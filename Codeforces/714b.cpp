#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100],x;
    set<int>s;
    cin>>n;

    for(int ii=0;ii<n;ii++)
    {
        cin>>x;
        s.insert(x);
    }
    //cout<<s.size();
    if(s.size()>3)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    set<int>::iterator i;
    int ii=0;
    for(i=s.begin();i!=s.end();i++)
        a[ii++]=*i;

    if(s.size()==3)
    {
        if(a[2]-a[1]==a[1]-a[0]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
