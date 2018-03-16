#include<stdio.h>
int main()
{
    unsigned long long int n,M,N;
    while(scanf("%llu",&n)==1){
        if(n==0) break;
        M=(n*10)/9;
        if(n%9==0) printf("%llu %llu\n",M-1,M);
        else printf("%llu\n",M);
    }
    return 0;
}
