#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,x,cnt=1;
    cin>>k>>r;
    x=k;
    while(1)
    {
        if(x%10==0 || x%10==r)
            break;
        cnt++;
        x+=k;
    }
    cout<<cnt<<endl;
}
