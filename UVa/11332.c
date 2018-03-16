#include<stdio.h>
int abc(int n)
{
    int a,b,sum=0;
    while(n!=0)
    {
        a=n%10;
        sum+=a;
        n/=10;
    }
    b=sum;
    if(b>9) b=abc(b);
    return b;
}
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0) break;
        if(n>9)
        {
            n=abc(n);
        }
        printf("%d\n",n);
    }
    return 0;
}
