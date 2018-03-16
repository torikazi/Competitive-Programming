#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1,d,n;
    string s;
    map<string,int>mp;
    scanf("%d",&t);
    while(t--)
    {
        printf("Case %d: ",cs++);
        scanf("%d",&n);
        while(n--)
        {
            cin>>s>>d;
            mp[s]=d;
        }
        cin>>d;
        cin>>s;
        if(mp[s] && mp[s]<=d)
            cout<<"Yesss"<<endl;
        else if(mp[s] && mp[s]<=d+5)
            cout<<"Late"<<endl;
        else cout<<"Do your own homework!"<<endl;
        mp.clear();
    }
}
