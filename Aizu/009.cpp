#include<bits/stdc++.h>
using namespace std;
#define N 1000000
int prime[N+5];
int a[N+5];
void seive()
{
    int i,j,k;
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(i=4;i<=N;i+=2) prime[i]=false;
    for(i=3;i<=sqrt(N);i+=2)
    {
        if(prime[i])
            for(j=i*i;j<=N;j+=2*i)
            prime[j]=false;
    }
    int c=1;
    for(i=3;i<=N;i++){
        if(prime[i]) c++;
        a[i]=c;
    }

}
int main()
{
    unsigned n,i;
    seive();
    while(cin>>n)
    {
        if(n<=1) cout<<0<<endl;
        else if(n==2) cout<<1<<endl;
        else cout<<a[n]<<endl;
    }
}
