#include<stdio.h>

int prime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) break;
    }
    if(i==sqrt(n)+1) return 0;
    else return 1;
}
int main()
{
    double a,b,c,y;
    int i,x;
    while(scanf("%lf%lf",&a,&b)==2)
    {
        c=0;
        for(i=a;i<=b;i++)
        {
            x=i*i+i+41;
            if(prime(x)==0) c++;
        }
        y=(c/((b-a)+1))*100;
        printf("%.2lf\n",y);
    }
    return 0;
}
