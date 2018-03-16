#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sf=0,fs=0,i,n;
    string s;
    cin>>n;
    cin>>s;

    for(i=1;i<n;i++)
    {
        if(s[i]=='S' && s[i-1]=='F') fs++;
        else if(s[i]=='F' && s[i-1]=='S') sf++;
    }
    if(sf>fs) printf("YES\n");
    else printf("NO\n");
}
