#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cs=1;
    long long b,i,n;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a[0]=='-') i=1;
        else i=0;
        for(n=0;i<a.size();i++)
        {
            n=n*10+a[i]-'0';
            n=n%b;
        }

        printf("Case %d: ",cs++);
        if(n) printf("not divisible\n");
        else printf("divisible\n");
    }
}
