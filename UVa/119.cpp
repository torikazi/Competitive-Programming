#include<bits/stdc++.h>
using namespace std;
typedef pair <int,int> pii;
int main()
{
    string s[20],s1;
    int x,y,i,n,z,j;
    map<string,pii>mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        mp[s[i]].first=0;
        mp[s[i]].second=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>s1;
        cin>>x>>y;
        if(y!=0) z=x/y;
        mp[s1].first+=z*y;
        for(j=0;j<y;j++)
        {
            cin>>s1;
            mp[s1].second+=z;
        }
    }
    for(i=0;i<n;i++)
        cout<<s[i]<<" "<<mp[s[i]].second-mp[s[i]].first<<endl;
}

