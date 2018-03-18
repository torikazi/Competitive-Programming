#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,y,a,b,c;
    cin>>x>>y>>c;
    if(x+y<c) printf("Impossible\n");
    else if(x>c ) cout<<c<<" 0"<<endl;
    else if(y>c) cout<<"0 "<<c<<endl;
    else{
        if(x>=y){
            a=x;
            b=c-x;
        }
        else if(x<y)
        {
            a=c-y;
            b=y;
        }
        cout<<a<<" "<<b<<endl;
    }
}
