#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    long long int a,b,n,m,k,c,x,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&n,&m)==4;
        k=2;
        c=a+b;
        while(k!=n)
        {
            a=b;
            b=c;
            c=a+b;
            k++;
        }
        x=pow(10,m)+.1;
        //printf("%d\n",x);
        c=c%x;
        printf("%lld\n",c);
    }
    return 0;
}
