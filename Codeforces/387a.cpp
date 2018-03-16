#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    while(scanf("%d:%d",&a,&b)==2)
    {
        scanf("%d:%d",&c,&d);
        e=a-c;
        f=b-d;
        if(e>=0&&f<0)
        {
            e--;
            if(e<0) e=24+e;
            f=60+f;
        }
        else if(e<0&&f>=0)
        {
            e=24+e;
        }
        else if(e<0&&f<0)
        {
            e=24+e;
            e--;
            f=60+f;
        }
        if(e<10&&f>9) printf("0%d:%d\n",e,f);
        else if(e>9&&f<10) printf("%d:0%d\n",e,f);
        else if(e<10&&f<10) printf("0%d:0%d\n",e,f);
        else printf("%d:%d\n",e,f);
    }
    return 0;
}
