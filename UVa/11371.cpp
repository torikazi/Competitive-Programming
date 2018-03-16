#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,i,s,x,b,y,z;
    char n[10000];
    while(scanf("%s",&n)==1)
    {
        b=strlen(n);
        sort(n,n+b);
        for(i=0,s=0;n[i]!='\0';i++)
        {
            a=(n[i]-'0');
            s=s*10+a;
        }
        x=s;
        y=0;
        while(s!=0)
        {
            b=s%10;
            y=y*10+b;
            s/=10;
        }
        z=(y-x)/9;
        printf("%lld - %lld = %lld = 9 * %lld\n",y,x,y-x,z);
    }
    return 0;
}
