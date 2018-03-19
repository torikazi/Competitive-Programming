#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005],b[100005],aa[100005],bb[100005],i,mn,mx,ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        aa[i]=a[i];
        bb[i]=b[i];
    }
    sort(aa,aa+n);
    sort(bb,bb+n);
    mn=aa[0];
    mx=bb[n-1];
    //cout<<mn<<" "<<mx<<endl;
    for(i=0,ans=-1;i<n;i++)
    {
        if(a[i]==mn &&b[i]==mx)
        {
            ans=i+1;
          //  cout<<"m";
            break;
        }
    }
    cout<<ans<<endl;
}
