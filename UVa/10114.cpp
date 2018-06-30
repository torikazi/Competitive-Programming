#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,mnth[20000];
    double d,p,pp[20000],tt,ll,tor[30000],owe;
    while(cin>>m>>d>>p>>n){
        if(m<0) break;
        memset(tor,0,sizeof(tor));
        for(int i=0;i<n;i++)
        {
            cin>>mnth[i]>>pp[i];
            tor[mnth[i]]=pp[i];
        }

        for(int i=1;i<=m;i++)
        {
            if(tor[i]==0) tor[i]=tor[i-1];
        }
        owe=p;
        tt=p/m;
        p+=d;
    //    owe=p;
        int i;
        for(i=0;i<=m;i++)
        {
            p-=(p*tor[i]);
           // cout<<owe<<" "<<p<<endl;
            if(owe<p) break;
            owe-=tt;
        }
        if(i==1) cout<<i<<" month"<<endl;
        else cout<<i<<" months"<<endl;

    }
}
