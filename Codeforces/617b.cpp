#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[200],i,j,c,f=0;
    long long ans;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;)
    {
        if(a[i]==1)
        {
            f=1;
            while(a[i] &&i<n) i++;
            c=0;
            while(!a[i] && i<n)
            {
                c++;
                i++;
            }
            if(i!=n) v.push_back(c+1);
            c=0;
        }
        else i++;
    }
    if(f==0) cout<<"0"<<endl;
    else{
        ans=1;
        for(i=0;i<v.size();i++)
        {
            ans=ans*v[i];
        }
        cout<<ans<<endl;
    }
}
