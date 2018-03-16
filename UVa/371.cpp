#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,m,c,i,x,y,max;
    while(scanf("%lld%lld",&n,&m)==2)
    {
        if(n==0 &&m==0) break;
        if(n>m)
            swap(n,m);
        if(n==1)
        {
            max=3;
            y=1;
        }
        else max=0;
        for(i=n;i<=m;i++)
        {
            c=0;
            x=i;
            while(x!=1)
            {
                if(x%2==0) x=x/2;
                else x=3*x+1;
                c++;
            }
            if(c>max)
            {
                max=c;
                y=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",n,m,y,max);
    }
    return 0;
}
