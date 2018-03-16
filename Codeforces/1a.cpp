#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,c1,c;
    cin>>n>>m>>a;
    c=n/a;
    if(a*c!=n) c++;
    c1=m/a;
    if(a*c1!=m) c1++;
    cout<<c*c1<<endl;
}
