#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,m;
    cin>>a>>b;
    c=0;
    while(a!=b && a && b)
    {
        if(a>b)
        {
            m=a/b;
            c+=m;
            a=a-m*b;

        }
        else
        {
            m=b/a;
            c+=m;
            b=b-m*a;
        }
    }
    cout<<c;

}
