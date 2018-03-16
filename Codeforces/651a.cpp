#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,m=0;
    cin>>a>>b;
    if(a==1 && b==1) cout<<0;
    else
    {
        if(a>b) swap(a,b);
        while(a>0 && b>0)
        {
            m++;
            a++;
            b=b-2;
            if(b<a) swap(a,b);
        }
        cout<<m<<endl;
    }

}
