#include<stdio.h>
int main()
{
    long long int a,b,c,n,k,s;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) printf("0\n");
        else if(n==1) printf("1\n");
        else if(n==2) printf("2\n");
        else
        {
            a=1;
            b=1;
            k=2;
            s=2;
            while(k!=n)
            {
                c=a+b;
                a=b;
                b=c;
                k++;
                s+=c;
            }
            printf("%lld\n",s);
        }

    }
    return 0;
}
