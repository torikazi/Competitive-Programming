#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d,a[100005],s=0,i,j=0;
    scanf("%I64d%I64d",&n,&d);
    for(i=0;i<n;i++)
        scanf("%I64d",&a[i]);
    for(i=0,s=0;i<n;i++)
    {
        for(;j<n;j++)
        {
            if(a[j]-a[i]>d) break;
        }
        s+=((j-i-1)*(j-i-2))/2;
    }
    printf("%I64d\n",s);
}
