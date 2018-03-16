#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int k,i,l,sum,a;
    char n[1000];
    while(scanf("%s",n)==1)
    {
        sum=0;
        if(strlen(n)==1&&n[0]-48==0) break;
        l=strlen(n);
        for(k=0,i=l-1;i>=0;k++,i--)
        {
            sum+=(n[i]-48)*(pow(2,k+1)-1);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
