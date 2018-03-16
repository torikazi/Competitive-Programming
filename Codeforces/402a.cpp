#include<stdio.h>
int main()
{
    int k,a,b,v,c,n;
    scanf("%d%d%d%d",&k,&a,&b,&v);
    if(b+1<=k)
    {
        if(v>a) v=a;
        n=(b+1)*v;
        a=a-n;
        c=1;
        while(a>0)
        {
            a=a-v;
            c++;
        }
        printf("%d\n",c);
    }
    else if(b+1>k)
    {
        c=0;
        if(v>a) v=a;
        while(a>0)
        {
            if(b>=k) b=b-k+1;
            else if(b<k)
            {
                k=b+1;
                b=0;
            }
            a=a-(k*v);
            if(b==0) k=1;
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
