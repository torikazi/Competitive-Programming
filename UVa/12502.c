#include<stdio.h>
int main()
{
    int T,x,y,z,p,a;
    scanf("%d",&T);
    while(T--&&scanf("%d%d%d",&x,&y,&z)==3)
    {
        if(x>y) a=x;
        else a=y;
        a=a*2;
        if(x>y)
        {
            a=a-y;
            p=z*a/(x+y);
            printf("%d\n",p);
        }
        else
        {
            a=a-x;
            p=z*a/(x+y);
            p=z-p;
            printf("%d\n",p);
        }
    }
    return 0;
}
