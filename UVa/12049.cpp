#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,x,j,cnt;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector <int> a,b;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(i=0;i<m;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        i=0;j=0,cnt=0;
        while(i<n && j<m)
        {
           // cout<<i<<" "<<j<<" ";
            if(a[i]<b[j])
            {
                cnt++;
                i++;
            }
            else if(b[j]<a[i])
            {
                cnt++;
                j++;
            }
            else {
                i++;
                j++;
            }
         //   cout<<cnt<<endl;
        }
        cnt+=(n-i)+(m-j);
        cout<<cnt<<endl;
    }
}
