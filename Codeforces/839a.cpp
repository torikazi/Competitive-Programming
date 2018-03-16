#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[200],k,s=0,cnt=0,i;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>=8)
        {
            s+=8;
            a[i+1]=a[i+1]+(a[i]-8);
        }
        else s+=a[i];
        cnt++;
        if(s>=k) break;
    }
    if(s<k) printf("-1\n");
    else cout<<cnt<<endl;
}
