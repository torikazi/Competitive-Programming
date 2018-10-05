#include <bits/stdc++.h>
using namespace std;

set<int> s;
void primef(int n)
{
    while(n%2==0)
    {
        s.insert(2);
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            s.insert(i);
            n/=i;
        }
    }
    if(n>2)
        s.insert(n);
}

int main()
{
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        s.clear();
        primef(n);

        if(s.size()==3)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }

    return 0;
}
