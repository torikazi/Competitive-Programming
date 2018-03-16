#include<bits/stdc++.h>
using namespace std;
int main()

{
    map<string,int>mp1;
    int n,m,i,cnt;
    string s;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        mp1[s]=1;
    }
    for(i=0,cnt=0;i<m;i++)
    {
        cin>>s;
        if(mp1[s]==1){
            cnt++;
        }
    }
    n-=cnt;
    m-=cnt;
    if(cnt%2==0)
    {
        n=n+(cnt/2);
        m=m+(cnt/2);
    }
    else
    {
        n=n+(cnt/2)+1;
        m=m+(cnt/2);
    }

    if(m>=n) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
