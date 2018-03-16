#include<stdio.h>
int main()
{
    long long int n,i,a;
    while(scanf("%lld",&n)==1)
    {
        if(n==1) printf("1\n");
        else
        {
            a=0;
            for(i=n;i>=1;i-=2)
            {
                a=a+i;
            }
            a=a*2-1;
            a=a+(a-2)+(a-4);
            printf("%lld\n",a);
        }
    }
    return 0;
}
