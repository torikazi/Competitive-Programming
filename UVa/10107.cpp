#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int i=0,j,k,x,b,a[20000],t=1;
    while(scanf("%lld",&a[i])==1)
    {
        sort(a,a+i+1);
        if(i%2!=0)
        {
            x=i/2;
            printf("%lld\n",(a[x]+a[x+1])/2);
        }
        else
        {
            x=(i/2);
            printf("%lld\n",a[x]);
        }
        t++;
        i++;
    }
    return 0;
}
