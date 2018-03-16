#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,a,b;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        a=sqrt(n);
        b=a*a;
        if(n==b) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
