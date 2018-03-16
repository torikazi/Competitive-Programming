#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,i,x;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        x=(n-i)/i;
        if(x*i==(n-i)) cnt++;
    }
    cout<<cnt<<endl;
}
