#include<bits/stdc++.h>
using namespace std;
long long x[10009];
long long a, b, c, d, e, f;
long long fn(long long a,long long b,long long c,long long d,long long e,long long f,long long n) {
    int i;
    x[0]=a;
    x[1]=b;
    x[2]=c;
    x[3]=d;
    x[4]=e;
    x[5]=f;
    for(i=6;i<=n;i++)
    {
        x[i]=(x[i-1]+x[i-2]+x[i-3]+x[i-4]+x[i-5]+x[i-6])%10000007;
    }

}
int main() {
    long long n, caseno = 0, cases;
    cin>>cases;

    while( cases-- ) {

        cin>>a>>b>>c>>d>>e>>f>>n;
        fn(a,b,c,d,e,f,n);
        cout<<"Case "<<++caseno<<": "<<x[n]%10000007<<endl;

    }
    return 0;
}


