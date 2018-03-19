#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,a[100009],b[100009],c[100009];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n-1);

    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
    for(i=0;i<n-2;i++)
        cin>>c[i];
    sort(c,c+n-2);
    for(i=0;i<n;i++)
    {
        if(b[i]!=c[i])
        {
            cout<<b[i]<<endl;
            break;
        }

    }

}
