#include<stdio.h>
int main()
{
    int e,f,c,T,a,b,i,s,n,count;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        count=0;
        scanf("%d %d %d",&e,&f,&c);
        s=e+f;
        while(s>=c)
        {
            a=s/c;
            b=s%c;
            count+=a;
            s=a+b;
        }
        printf("%d\n",count);
    }
    return 0;
}
