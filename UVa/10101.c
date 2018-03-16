#include<stdio.h>
int main()
{
    long long  int n,a,b,c=1;
    while (scanf("%lld",&n)==1)
    {
        printf("%4lld.",c);
        b=n/100000000000000;
        if (b>0)
            printf(" %lld kuti",b);
        a=n%100000000000000;
        b=a/1000000000000;
        if (b>0)
            printf(" %lld lakh",b);
        a=a%1000000000000;
        b=a/10000000000;
        if (b>0)
            printf(" %lld hajar",b);
        a=a%10000000000;
        b=a/1000000000;
        if (b>0)
            printf(" %lld shata",b);
        a=a%1000000000;
        b=a/10000000;
        if (b==0&&n>10000000)
            printf(" kuti");
        if (b>0)
            printf(" %lld kuti",b);
        a=a%10000000;
        b=a/100000;
        if (b>0)
            printf(" %lld lakh",b);
        a=a%100000;
        b=a/1000;
        if (b>0)
            printf(" %lld hajar",b);
        a=a%1000;
        b=a/100;
        if (b>0)printf(" %lld shata",b);
        a=a%100;
        b=a/1;
        if (b>0)
            printf(" %lld",b);
        if (n==0)
            printf(" %lld",n);
        printf("\n");
        c++;
    }
    return 0;
}

