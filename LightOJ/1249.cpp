#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string a[110],xx,yy;
    int t,p[110],n,i,k,total,x,y,z,f;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        for(i=0,total=0;i<n;i++)
        {
            cin>>a[i];
            cin>>x>>y>>z;
            p[i]=x*y*z;
            total=total+p[i];
        }
        total=total/n;

        for(i=0,f=0;i<n;i++)
        {
            if(p[i]<total)
            {
                yy=a[i];
                f=1;
            }
            if(p[i]>total)
            {
                xx=a[i];
                f=1;
            }
        }
        cout<<"Case "<<k<<": ";
        if(f)
            cout<<xx<<" took chocolate from "<<yy<<endl;
        else
            cout<<"no thief"<<endl;
    }
    return 0;
}
