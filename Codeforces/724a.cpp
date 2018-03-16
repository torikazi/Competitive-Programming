#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa,bb,x;
    string a,b;
    cin>>a>>b;
    if(a=="saturday") aa=1;
    else if(a=="sunday") aa=2;
    else if(a=="monday") aa=3;
    else if(a=="tuesday") aa=4;
    else if(a=="wednesday") aa=5;
    else if(a=="thursday") aa=6;
    else if(a=="friday") aa=0;

    if(b=="saturday") bb=1;
    else if(b=="sunday") bb=2;
    else if(b=="monday") bb=3;
    else if(b=="tuesday") bb=4;
    else if(b=="wednesday") bb=5;
    else if(b=="thursday") bb=6;
    else if(b=="friday") bb=0;

    x=(aa+30)%7;
    if(x==bb)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    x=(aa+28)%7;
    if(x==bb)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    x=(aa+31)%7;
    if(x==bb)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
}
