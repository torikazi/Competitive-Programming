#include<bits/stdc++.h>
using namespace std;
typedef long long int TT;
int main()
{
    TT n,a,b,c,d,e,f,x,y;
    TT ans;
    cin>>n;
    a=1000000009;
    b=-1000000009;
    c=-1000000009;
    d=1000000009;
    while(n--)
    {
        cin>>x>>y;
        if(x<a) a=x;
        if(y>b) b=y;
        if(x>c) c=x;
        if(y<d) d=y;
    }

    e=abs(a-c);
    f=abs(b-d);
    if(e>f) cout<<e*e<<endl;
    else cout<<f*f<<endl;
}
