#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[10000],mx,s,k;
    cin>>n>>k;

    for(i=0,s=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=5-a[i];
        if(a[i]>=k) s++;
    }
    s=s/3;
    cout<<s<<endl;
}
