#include<bits/stdc++.h>
using namespace std;

int n;
string s,c="";

bool match(){
    int i,j;
    for(i=0,j=c.size();i<c.size();i++,j++)
    {
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}

int main()
{
    int i,j,k,m=0;
    cin>>n;
    cin>>s;


    c="";
    for(j=0;j<=n/2;j++)
    {
        c+=s[j];
        //cout<<c<<endl;
        if(match())
        {
            k=c.size();
       //     cout<<"k"<<k<<endl;
            m=max(m,k);
        }
    }
    if(m) cout<<n-m+1<<endl;
    else cout<<n<<endl;
}
