#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,h,m,ans,c=0,i=0;
    cin>>x>>h>>m;
    if(h%10==7 || m%10==7)
        ans=0;
    else{
        while(1){
        i++;
        m--;
        if(m==-1)
        {
            m=59;
            h--;
            if(h==-1) h=23;
        }
        if(i==x)
        {
            c++;
            i=0;
            if(h%10==7 || m%10==7) break;
        }
        }
    }
    cout<<c<<endl;
}
