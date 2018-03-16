#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,d=0,f=0;
    string s;
    cin>>s;
    for(i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='0') d++;
        if(d==6)
        {
            f=1;
            break;
        }
    }
    if(f){
    for(;i>=0;i--)
    {
        if(s[i]=='1')
        {
            cout<<"yes"<<endl;
            return 0;
        }
    }
    cout<<"no"<<endl;
    return 0;
    }
    cout<<"no"<<endl;
    return 0;

}
