#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x,y,cn=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;;
        if(x>0) cn++;
        else cnt++;
    }
    if(cn<=1 || cnt<=1)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
