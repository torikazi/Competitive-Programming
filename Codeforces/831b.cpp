#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,char>mp;
    char z;
    int i;
    string a,b,s;
    cin>>a>>b;
    for(i=0;i<26;i++)
    {
        mp[a[i]]=b[i];
    }
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            z=tolower(s[i]);
            //cout<<z;
            z=toupper(mp[z]);
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            z=mp[s[i]];
           // cout<<mp[s[i]];
        }
        else z=s[i];
        cout<<z;
    }
    cout<<endl;
}
