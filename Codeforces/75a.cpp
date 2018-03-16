#include<stdio.h>
int main()
{
    long long int A,B,a,b,D,C,c,x;
    while(scanf("%lld%lld",&A,&B)==2)
    {
        C=A+B;
        D=0;
        while(C!=0)
        {
            x=C%10;
            if(x!=0) D=D*10+x;
            C=C/10;
        }
        C=0;
        while(D!=0)
        {
            x=D%10;
            C=C*10+x;
            D=D/10;
        }
        a=0;
        while(A!=0)
        {
            x=A%10;
            if(x!=0) a=a*10+x;
            A=A/10;
        }
        A=0;
        while(a!=0)
        {
            x=a%10;
            A=A*10+x;
            a=a/10;
        }
        //printf("%lld\n",A);
        b=0;
        while(B!=0)
        {
            x=B%10;
            if(x!=0) b=b*10+x;
            B=B/10;
        }
        B=0;
        while(b!=0)
        {
            x=b%10;
            B=B*10+x;
            b=b/10;
        }
        c=A+B;
        //printf("%lld\n",B);
        if(C==c) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
