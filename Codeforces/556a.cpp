#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans,r=0,c=0,n,i;
    string a;
    cin>>n;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='1') c++;
        else if(a[i]=='0') r++;
    }
    ans=min(r,c);
    n=n-2*ans;
    printf("%d\n",n);
}
