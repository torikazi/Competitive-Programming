#include<stdio.h>
int main()
{
    int n,t,a,s;
    while(scanf("%d",&n)==1)
    {
        s=n;
        t=n;
        while(t>2)
        {
            a=t/3;
            s+=a;
            t=(t%3)+a;
        }
        if(t==2) s++;
        printf("%d\n",s);
    }
    return 0;
}
