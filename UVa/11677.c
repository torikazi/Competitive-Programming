#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4)
    {
        x=(d-b);
        y=(c-a);
        if(a==0&&b==0&&c==0&&d==0) break;
        if(x<0&&y>0)
        {
            y--;
            x+=60;
        }
        else if(y<0&&x>0)
        {
            y+=24;
        }
        else if(x<=0&&y<=0)
        {
            x+=60;
            y+=23;
        }
        z=x+(y*60);
        printf("%d\n",z);
    }
}
