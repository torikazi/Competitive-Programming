#include<stdio.h>
int main()
{
    long long int S,D,A;
    while(scanf("%lld%lld",&S,&D)==2)
    {
        A=0;
        while(A<D)
        {
            A=A+S;
            if(A>=D) break;
            S++;
        }
        printf("%lld\n",S);
    }
    return 0;
}
