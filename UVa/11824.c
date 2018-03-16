#include<stdio.h>
#include<math.h>

int main()
{
    long long int t,L[100],i,j,sum,m;
    scanf("%lld",&t);
    while(t--)
    {
        for(i=0;;i++)
        {
            scanf("%lld",&L[i]);
            if(L[i]==0) break;
        }
        m=i;
        qsort(L,L+i);
        sum=0;
        for(j=0;j<i;j++)
        {
            sum+=2*pow(L[j],m);
            m--;
        }
        if(sum<=5000000) printf("%lld\n",sum);
        else printf("Too expensive\n");
    }
}
