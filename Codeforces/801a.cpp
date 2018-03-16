#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]=='V' && s[i]=='K')
        {
            cnt++;
            s[i-1]='a';
            s[i]='a';
        }
    }
    for(int i=1;i<s.size();i++)
    {
        if((s[i-1]=='V' && s[i]=='V' ) || s[i-1]=='K' && s[i]=='K')
        {
            cnt++;
            break;
        }
    }
    cout<<cnt<<endl;
}
