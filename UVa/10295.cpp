#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    string s;
    double d;
    map<string,double>mp;
    cin>>n>>m;
    while(n--)
    {
        cin>>s>>d;
        mp[s]=d;
    }
    d=0;
    i=1;
    while(cin>>s)
    {
        d+=mp[s];
        if(s==".")
        {
            cout<<d<<endl;
            d=0;
            i++;
        }
        if(i>m) break;
    }
}
