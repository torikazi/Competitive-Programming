#include<stdio.h>
long long int a[10000010];
int main()
{
    long long int n,m,i,s,t,x,f,c;
    while(scanf("%lld",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        scanf("%lld",&m);
        f=0;
        if(m%2==0) x=m/2;
        else x=(m/2)+1;
        for(;x<m;x++)
        {
            s=0;
            t=0;
            c=0;
            for(i=0;i<n;i++)
            {
                if(a[i]==x)
                {
                    c++;
                    s=1;
                }
                else if(a[i]==m-x) t=1;
            }
            if((s==1&&t==1)||c>=2)
            {
                printf("Peter should buy books whose prices are %lld and %lld.\n\n",m-x,x);
                f=1;
                break;
            }
        }
        if(f==0) printf("Peter should buy books whose prices are 0 and 0.\n\n");
    }
    return 0;
}
