#include<stdio.h>
int main()
{
    long int t,n,a,b,c,i,sum;
    while(scanf("%ld",&t)==1){
        while(t--)
        {
            scanf("%ld",&n);
            sum=0;
            for(i=1;i<=n;i++)
            {
                scanf("%ld%ld%ld",&a,&b,&c);
                sum+=a*c;
            }
            printf("%ld\n",sum);
        }
    }
    return 0;
}
