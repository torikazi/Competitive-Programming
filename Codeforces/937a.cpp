#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    set<int>s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    if(*s.begin()==0) cout<<s.size()-1<<endl;
    else cout<<s.size()<<endl;

}
