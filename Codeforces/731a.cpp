#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=1,i,xx,r,s=0;
    string a;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        xx=a[i]-96;
        r=abs(x-xx);
        if(r<13)
           {
               s+=r;
           }
        else
            {
                s+=26-r;
            }
        x=xx;
        //cout<<s<<endl;
    }
    cout<<s;
}
