#include<bits/stdc++.h>
using namespace std;


long long int nums[40001];
long long int recur(long long int N)
{
    long long int cnt=0;
    for(long long int i=0;i<N;i++)
    {
        for(long long int j=i+1;j<N;j++)
        {
          //  printf("%lld %lld\n",i,j);
            if(nums[i]!=nums[j]) cnt++;
        }
    }
    return cnt;
}
int main()
{
    long long int i,j,N,kase=1;
    //freopen("d.in","r",stdin);
    while(1)
    {
        cin>>N;
        for(i=0;i<N;i++)
            cin>>nums[i];
        if(N==0) break;
        cout<<"Case "<<kase++<<": "<<recur(N)<<endl;
    }
    return 0;
}
