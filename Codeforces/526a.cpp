#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,i,j,k,cnt=0;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='*')
        {

            for(j=1;j<n;j++)
            {
                //cout<<i<<" ";
                for(k=i,cnt=0;k<n;)
                {
                    if(a[k]=='*')
                    {
                      //  cout<<k<<" ";
                        cnt++;
                        k+=j;
                    }
                    else break;
                    if(cnt==5)
                    {
                        f=1;
                        break;
                    }

                }
                if(f) break;

            }
        }
        if(f) break;
    }
    if(f) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
