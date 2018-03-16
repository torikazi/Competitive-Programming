
#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,n,k,m,M,p;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        if(n==0) c=0;
        else if(n==1) c=1;
        if(n==2) c=1;
        else
        {
            a=0;
            b=1;
            k=1;
            while(k<n)
            {
                c=a+b;
                a=b;
                b=c;
                k++;
            }
        }
        //printf("%lld\n",c);
        p=pow(2,m);
        //printf("%lld\n",p);
        M=c%p;
        printf("%lld\n",M);
    }
    return 0;
}

