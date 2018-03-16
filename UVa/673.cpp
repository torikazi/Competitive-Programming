#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f;
    string a;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,a);
        stack<char>s;
        f=1;
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='(' || a[i]=='[') s.push(a[i]);
            else if(!s.empty() && a[i]==')' && s.top()=='(')
                s.pop();
            else if(!s.empty() && a[i]==']' && s.top()=='[')
                s.pop();
            else
            {
                f=0;
                break;
            }
        }
        if(s.empty() && f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

