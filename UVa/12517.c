#include<stdio.h>
int add(int n)
{
    int a,s=0;
    while(n!=0)
    {
        a=n%10;
        s+=a;
        n/=10;
    }
    return s;
}
int main()
{
    int m,n,s,i;
    while(scanf("%d%d",&m,&n)==2)
    {
        s=0;
        if(m==0&&n==0) break;
        for(i=m;i<=n;i++)
        {
            if(i>9) s+=add(i);
            else s+=i;
        }

        printf("%d\n",s);
    }
    return 0;
}
