#include<stdio.h>
int main()
{
    int n,i,t=1,a,c;
    while(scanf("%d",&n)==1)
    {
        if(n<0) break;
        a=1;
        c=0;
        while(a<n)
        {
            a*=2;
            c++;
        }
        printf("Case %d: %d\n",t,c);
        t++;
    }
    return 0;
}
