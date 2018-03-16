#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,i,x,y;
    string s;
    scanf("%d",&n);
    cin>>s;
    x=y=0;
    for(i=0;i<s.size()-1;i++)
    {
        if(s[i]=='U') y++;
        else x++;
        if(x==y && s[i+1]==s[i])
            cnt++;
    }

    cout<<cnt<<endl;
}
