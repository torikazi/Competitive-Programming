#include<stdio.h>
int main()
{
    long long int A,L,D,c,t=1;
    while(scanf("%lld%lld",&D,&L)==2)
    {
        A=D;
        c=0;
        if(A<0 && L<0) break;
        while(A<=L)
        {
            c++;
            if(A==1) break;
            else if(A%2==0) A=A/2;
            else A=3*A+1;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,D,L,c);
        t++;
    }
    return 0;
}
