#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a==0 && b==0) break;
        printf("%lld\n",(b/5) - (a/5) +1 );
    }
}
