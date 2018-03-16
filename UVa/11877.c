#include<stdio.h>
int main()
{
    int n,count,a,b;
    while(scanf("%d",&n)==1)
    {
        count=0;
        if(n==0) break;
        while(n>=3)
        {
            a=n/3;
            b=n%3;
            count+=a;
            n=a+b;
        }
        if(n==2) count++;
        printf("%d\n",count);
    }
    return 0;
}
