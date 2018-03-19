#include<bits/stdc++.h>
int main()
{
    int a,b,x,y,tmp;
    char q,w,e,r;
    scanf("%c%c:%c%c",&q,&w,&e,&r);
    b=(q-'0')*10+w-'0';
   // printf("%d\n",b);
    x=e-'0';
    y=r-'0';
    //printf("%d:%d%d\n",b,x,y);
    y++;
        if(y>9)
        {
            y=0;
            x++;
            if(x>5)
            {
                x=0;
                b++;
                if(b>23)
                {
                    b=0;
                }
            }
        }



       // printf("%d:%d%d\n",b,x,y);
    tmp=b;
        tmp/=10;
        a=tmp%10;
    while(a!=y||(b%10)!=x)
    {
        y++;
        if(y>9)
        {
            y=0;
            x++;
            if(x>5)
            {
                x=0;
                b++;
                if(b>23)
                {
                    b=0;
                }
            }
        }
        tmp=b;
        tmp/=10;
        a=tmp%10;
        //printf("%d:%d%d\n",b,x,y);
        if(a==y &&x==b%10) break;
    }
    printf("%d%d:%d%d\n",a,b%10,x,y);

}
