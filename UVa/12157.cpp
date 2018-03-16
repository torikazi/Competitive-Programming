#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a[30],n,m,j,x,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0,m=0,j=0;i<n;i++){
            cin>>a[i];
            x=a[i]/30;
            if(a[i]%30==0) m+=x*10;
            else m+=(x+1)*10;
            x=a[i]/60;
            if(a[i]%60==0) j+=x*15;
            else j+=(x+1)*15;

        }
        cout<<"Case "<<cs++<<": ";
        if(m==j) cout<<"Mile Juice "<<m<<endl;
        else if(m<j) cout<<"Mile "<<m<<endl;
        else cout<<"Juice "<<j<<endl;
    }
}
