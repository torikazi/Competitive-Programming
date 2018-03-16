#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,k,ans;
    cin>>a>>b>>c>>d>>k;
    ans=0;
    if(c<=b && c>=a && d>=b )
    {
        ans=b-c+1;
        if(k>=c && k<=b) ans--;
    }
    else if(d>=a && d<=b && c<=a)
    {
        ans=d-a+1;
        if(k<=d && k>=a) ans--;
    }
    else if( a>=c && b<=d)
    {
        ans=b-a+1;
        if(k>=a && k<=b) ans--;
    }
    else if(c>=a && d<=b)
    {
        ans=d-c+1;
        if(k>=c && k<=d) ans--;
    }
    cout<<ans<<endl;
}
