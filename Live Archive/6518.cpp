#include<bits/stdc++.h>
using namespace std;
long long int t,n,a[100005];

void uva(long long int n)
{
    long long int i;
    for(i=4;i<=n;i++)
        a[i]=a[i-1]+a[i-2]+a[i-3]+a[i-4];
}
int main()
{

    long long int i;

    cin>>t;
    a[0]=1;
    a[1]=1;
    a[2]=2;
    a[3]=4;
    uva(100);
   // for(i=0;i<20;i++)
     //       cout<<a[i]<<" "<<endl;
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<endl;
    }


}
