#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,f;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        cin>>b;

        for(i=0;i<n;i++)
        {
            if(a[i]==b[i-1] && i-1>=0)
            {
                a[i]='1';
                b[i-1]='1';
            }
            else if(a[i]==b[i])
            {
                a[i]='1';
                b[i]='1';
            }
            else if(a[i]==a[i-1] && i-1>=0)
            {
                a[i]='1';
                a[i-1]='1';
            }
            else if(b[i]==b[i-1] && i-1>=0)
            {
                b[i]='1';
                b[i-1]='1';
            }
        }
     //   cout<<a<<endl<<b<<endl;
        f=1;
        for(i=0;i<n;i++)
        {
            if(a[i]=='0' || b[i]=='0')
            {
              //  cout<<i<<endl;
                f=0;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
