#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    long int t,L[100],i,j,sum,m;
    scanf("%ld",&t);
    while(t--)
    {
        for(i=0;;i++)
        {
            scanf("%ld",&L[i]);
            if(L[i]==0) break;
        }
        m=i;
        sort(L,L+i);
        sum=0;
        for(j=0;j<i;j++)
        {
            sum+=2*pow(L[j],m);
            m--;
        }
        if(sum<=5000000) printf("%ld\n",sum);
        else printf("Too expensive\n");
    }
}
