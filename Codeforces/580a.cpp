#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100009],c,mx,i,j;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0,mx=0;i<n;i++)
    {
        if(a[i]>=a[i-1] && i) continue;
        for(j=i+1,c=1;j<n;j++)
        {
            if(a[j]>=a[j-1]) c++;
            else break;
        }
        mx=max(mx,c);
    }
    cout<<mx<<endl;

}
