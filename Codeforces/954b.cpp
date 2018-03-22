#include<bits/stdc++.h>
using namespace std;

int n;
string s,c="";

bool match(int q){
    int i,j;
    for(i=q,j=q+c.size();i<q+c.size();i++,j++)
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

    for(i=0;i<n/2;i++)
    {
        c="";
        for(j=i;j<n/2;j++)
        {
            c+=s[j];
          //  cout<<c<<endl;
            if(match(i))
            {
                k=c.size();
           //     cout<<"k"<<k<<endl;
                m=max(m,k);
            }
        }
    }
    if(m) cout<<n-m+1<<endl;
    else cout<<n<<endl;
}
