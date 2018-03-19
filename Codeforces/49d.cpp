#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,y;
    string a;
    cin>>n;
    cin>>a;
    for(i=0,x=0,y=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]!='0') x++;
        }
        else
        {
            if(a[i]!='1') x++;
        }
        if(i%2==0)
        {
            if(a[i]!='1') y++;
        }
        else
        {
            if(a[i]!='0') y++;
        }

    }
    cout<<min(x,y);
}
