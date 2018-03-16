#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    map<char,string>mp;
    mp['2']="2";
    mp['3']="3";
    mp['4']="223";
    mp['5']="5";
    mp['6']="53";
    mp['7']="7";
    mp['8']="7222";
    mp['9']="7332";
    string a,s="";
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]!='0'&& a[i]!='1') s+=mp[a[i]];
    }
    sort(s.rbegin(),s.rend());
    cout<<s<<endl;
    return 0;

}
