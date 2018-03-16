#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c[10],d,x;
    int i,j,l,t=1;
    char h=243;
    c[0]="eu";
    c[1]="tu";
    c[2]="ele/ela";
    c[3]='n';
    c[3]+=h;
    c[3]+='s';
    c[4]='v';
    c[4]+=h;
    c[4]+='s';
    c[5]="eles/elas";
    while(cin>>a>>b)
    {
        if(t!=1) cout<<endl;
        cout<<a<<" "<<"(to "<<b<<")"<<endl;

        t++;
        l=a.size();
        for(i=l-1,d="";i>l-3;i--)
            d+=a[i];
        for(j=0,x="";j<=i;j++)
            x+=a[j];
        if(d=="ra")
        {
            cout<<c[0]<<"        "<<x<<"o"<<endl;
            cout<<c[1]<<"        "<<x<<"as"<<endl;
            cout<<c[2]<<"   "<<x<<"a"<<endl;
            cout<<c[3]<<"       "<<x<<"amos"<<endl;
            cout<<c[4]<<"       "<<x<<"ais"<<endl;
            cout<<c[5]<<" "<<x<<"am"<<endl;

        }
        else if(d=="re")
        {
            cout<<c[0]<<"        "<<x<<"o"<<endl;
            cout<<c[1]<<"        "<<x<<"es"<<endl;
            cout<<c[2]<<"   "<<x<<"e"<<endl;
            cout<<c[3]<<"       "<<x<<"emos"<<endl;
            cout<<c[4]<<"       "<<x<<"eis"<<endl;
            cout<<c[5]<<" "<<x<<"em"<<endl;

        }
        else if(d=="ri")
        {
            cout<<c[0]<<"        "<<x<<"o"<<endl;
            cout<<c[1]<<"        "<<x<<"es"<<endl;
            cout<<c[2]<<"   "<<x<<"e"<<endl;
            cout<<c[3]<<"       "<<x<<"imos"<<endl;
            cout<<c[4]<<"       "<<x<<"is"<<endl;
            cout<<c[5]<<" "<<x<<"em"<<endl;

        }
        else cout<<"Unknown conjugation"<<endl;

    }
}
