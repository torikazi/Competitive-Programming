//MAX N is 65 and N >= R

#include<bits/stdc++.h>
#define i64 unsigned long long
using namespace std;
i64 dp[800][800];

i64 nCr(i64 n, i64 r)
{
    if(n==r) return dp[n][r] = 1;
    if(r==0) return dp[n][r] = 1;
    if(r==1) return dp[n][r] = (i64)n;
    if(dp[n][r]) return dp[n][r];
    return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

int main()
{
    i64 n, r,s;
    cin>>n;
    s=nCr(n,5)+nCr(n,6)+nCr(n,7);
    cout<<s<<endl;

    return 0;
}
