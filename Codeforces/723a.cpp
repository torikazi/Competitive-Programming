#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s,mx,i;
    cin>>a>>b>>c;
    for(i=1,mx=9999999;i<=100;i++)
    {
        s=abs(i-a)+abs(i-b)+abs(i-c);
        mx=min(mx,s);
    }
    cout<<mx;
}
