#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n,m,x;
    cin>>n;
    m=1;
    while(1)
    {
        x=m*n+1;
        if(!isprime(x))
        {
            cout<<m<<endl;
            break;
        }
        m++;
    }

}
