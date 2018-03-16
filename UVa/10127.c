#include<stdio.h>
int main()
{
    int n,t,i,k;
    while(scanf("%d",&n)==1)
    {
        t=1;
        i=1;
        while(i)
        {
            i=i*10+1;
            i=i%n;
            t++;
        }
        printf("%d\n",t);
    }
    return 0;
}
