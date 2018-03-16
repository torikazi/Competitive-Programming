#include<stdio.h>
#include<math.h>
int prime(long int n)
{
    int i,a=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    if(a>0) return 0;
    else return 1;
}
int rev(unsigned int n)
  {
    unsigned int r = 0;
    do
        r = r * 10 + n % 10;
    while ((n /= 10) > 0);
    return r;
  }
int main()
{
    long int n,n1;
    while(scanf("%ld",&n)==1)
    {
        if(prime(n)!=1) printf("%ld is not a prime.\n",n);
        else
        {
            n1=rev(n);
            if(prime(n1)==1&&n1!=n)
                printf("%ld is a emirp.\n",n);
            else printf("%ld is a prime.\n",n);
        }
    }
    return 0;
}
