#include<stdio.h>
int main()
{
    long long int a,b,c,n,k;
    while(scanf("%lld",&n)==1)
    {
        if(n%4==2) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
