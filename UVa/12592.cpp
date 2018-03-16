#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a,b;
    map<string,string>mp;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,a);
        getline(cin,b);
       // cout<<a<<" "<<b<<endl;
        mp[a]=b;
    }
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,a);
        cout<<mp[a]<<endl;
    }
}
