#include<stdio.h>
int main()
{
    long long int a,b,c,x,y,i;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a==0&&b==0) break;
        c=0;
        i=0;
        while(a!=0||b!=0)
        {
            x=a%10;
            y=b%10;
            i=(x+y+i)/10;
            c+=i;
            a/=10;
            b/=10;
        }
        if(c==0) printf("No carry operation.\n");
        else if(c==1) printf("1 carry operation.\n");
        else printf("%lld carry operations.\n",c);
    }
    return 0;
}
