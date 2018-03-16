#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,x,y,z;
    cin>>n>>k;
    z=log2(k)+1;
    for(i=1;i<=z;i++)
    {
        x=pow(2,i);
        y=pow(2,i-1);
        //cout<<x;
        if(k%x==y)
        {
            cout<<i;
            break;
        }
    }
}
