#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,ss,l,i,j;
    string a;
    cin>>a;
    l=a.size();
    for(i=0,s=0;i<l;i++)
    {
        s+=pow(2,i);
    }
    for(j=0,ss=0,i=l-1;i>=0;i--,j++)
    {
        if(a[i]=='7') ss+=pow(2,j);
    }
    s+=ss;
    cout<<s;
}
