#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n,i,f=0,mx=0,c=0,b=0;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='(' || a[i]=='{' || a[i]=='[')
        {
            f=1;
            c=0;
        }
        if(a[i]==')' || a[i]==']' || a[i]=='}')
        {
            f=0;
            c=0;
            //if(f==1) b++;
        }
        if(((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))&& !f)
        {
            c++;
            mx=max(mx,c);
        }
        if(a[i]=='_' && !f) c=0;
        if(((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))&& f==1)
        {
            if(a[i-1]=='(' || a[i-1]=='{' ||a[i-1]=='[' || a[i-1]=='_')
                {
                    b++;
                 //   cout<<i<<" ";
                }
        }
    }
    cout<<mx<<" "<<b<<endl;

}
