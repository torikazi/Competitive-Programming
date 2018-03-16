#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin>>n;
    m=n/2;
    x=m;
    y=n-m;
    while(1)
    {
        if(__gcd(x,y)==1)
        {
            cout<<x<<" "<<y<<endl;
            break;
        }
        x--;
        y++;
    }
}
