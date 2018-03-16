#include<stdio.h>
int main()
{
    long long int a,b,c,n,k;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        else if(n==1) printf("1\n");
       // else if(n==2) printf("2\n");
        else
        {
            a=0;
            b=1;
            k=0;
            while(k!=n)
            {
                c=a+b;
                a=b;
                b=c;
                k++;
            }
            printf("%lld\n",c);
        }
    }
    return 0;
}

