#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,mx,mn;
    cin>>n>>k;
    mx=k*2;
    mn=1;
    if(n-k<=mx) mx=n-k;
    if(n==k) mn=0;
    if(k==0)
    {
        mx=0;
        mn=0;
    }

    cout<<mn<<" "<<mx<<endl;
}
