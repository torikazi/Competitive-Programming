#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0,i;
    cin>>n>>k;
    k=240-k;
    for(i=1;i<=n;i++)
    {
        if(k-i*5>=0)
        {
            k-=(i*5);
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
