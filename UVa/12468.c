#include<stdio.h>
int main()
{
    int a,b,x,y;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1 && b==-1) break;
        if(a<b)
        {
            x=a+100-b;
            y=b-a;
            if(x<y)
            {
                if(x<0) x*=-1;
                printf("%d\n",x);
            }
            else
            {
                if(y<0) y*=-1;
                printf("%d\n",y);
            }
        }
        else
        {
            x=b+100-a;
            y=a-b;
            if(x<y)
            {
                if(x<0) x*=-1;
                printf("%d\n",x);
            }
            else
            {
                if(y<0) y*=-1;
                printf("%d\n",y);
            }
        }
    }
    return 0;
}
