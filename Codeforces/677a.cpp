#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[2000],i,h,c;
    cin>>n;
    cin>>h;
    c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h) c++;
        c++;
    }
    cout<<c<<endl;
}
