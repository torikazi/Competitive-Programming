#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,s=0,i,cnt;
    string n;
    cin>>k;
    cin>>n;
    for(i=0;i<n.size();i++)
    {
        s+=n[i]-'0';
    }
    //cout<<s<<endl;
    if(s>=k) cout<<0<<endl;
    else
    {
        sort(n.begin(),n.end());
        for(i=0,cnt=0;i<n.size();i++)
        {
            s=s-(n[i]-'0')+9;
           // cout<<s<<endl;
            cnt++;
            if(s>=k)
            {
                cout<<cnt<<endl;
                break;
            }
        }
    }
}
