#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,l;
    getline(cin,s);
    l=s.length();
    if(l>1) n=10*s[s.length()-2]-'0'+s[s.length()-1]-'0';
    else n=s[0]-'0';
    if(n%4==0) printf("4\n");
    else printf("0\n");
}
