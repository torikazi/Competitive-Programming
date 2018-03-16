#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    cout<<min(a+b+c,min(a+b+b+a,min(c+b+b+c,a+a+c+c)));
}
