#include<stdio.h>
int digit(int n)
{
    int s=0,a;
    if(n<=9) return n;
    while(n!=0)
    {
        a=n%10;
        s+=a*a;
        n=n/10;
    }
    digit(s);
}
int main()
{
    int n,a,i,t,s,tmp;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%d",&n);
       s=0;
       tmp=n;
       while(n!=0)
        {
            a=n%10;
            s+=(a*a);
            n=n/10;
        }
       if(digit(s)==1) printf("Case #%d: %d is a Happy number.\n",i,tmp);
       else printf("Case #%d: %d is an Unhappy number.\n",i,tmp);
    }
    return 0;
}
