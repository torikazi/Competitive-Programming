#include<bits/stdc++.h>
using namespace std;
#define MAX 251000000

int base[MAX], prlen;
vector<int>primes;
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

bool valid(int x)
{
    int b;
    while(x)
    {
        b=x%10;
        if(b!=2 && b!=3 && b!=5 && b!=7) return false;
        x/=10;
    }
    return true;
}
void sieve() {
    int i, j, k;
    for(i=3; i*i<MAX; i+=2)
        if(!chkC(base, i))
         for(j=i*i, k=i<<1; j<MAX; j+=k)
          setC(base, j);
    primes.push_back(2);
    for(i=3, prlen=1; i<MAX; i+=2)
        if(!chkC(base, i) && valid(i))
         primes.push_back(i);
}

int main()
{
     int x,y,i,t,cs=1;
    //cin>>x>>y;
    sieve();

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        printf("Case #%d: ",cs++);
        vector<int>::iterator low,up;
        low=std::lower_bound(primes.begin(),primes.end(),x);
        up=std::upper_bound(primes.begin(),primes.end(),y);
        x=low-primes.begin();
        y=up-primes.begin();
        cout<<y-x<<endl;
    }
}
