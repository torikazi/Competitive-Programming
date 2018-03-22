#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,i;
    string s;

    cin>>n;
    cin>>s;
    s+='a';
    for(i=0;i<n;i++)
    {
        if((s[i]=='R' && s[i+1]=='U') || (s[i]=='U' && s[i+1]=='R'))
        {
            s[i]='D';
            s[i+1]='d';
        }
    }
    //cout<<s<<endl;
    for(i=0;i<n;i++)
    {
        if(s[i]=='D' || s[i]=='U' || s[i]=='R') cnt++;
    }
    cout<<cnt<<endl;
}
