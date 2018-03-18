#include<stdio.h>
int main()
{
    int t,k,m,d,y,tm,td,x;
    int a[]={0,31,30,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d/%d/%d %d/%d",&m,&d,&y,&tm,&td);
        printf("%d ",k);
        if ((!(y%4) && y%100 ) || !(y%400) )
        {
            a[2]=29;
        }
        else{
            a[2]=28;
        }
        if(m==tm)
        {
            if(d==td) printf("SAME DAY\n");
            else if(td-d==1)
                printf("%d/%d/%d IS 1 DAY AFTER\n",tm,td,y);
            else if(td-d<=7 && td-d>=2)
                printf("%d/%d/%d IS %d DAYS AFTER\n",tm,td,y,td-d);
            else if(d-td==1)
                printf("%d/%d/%d IS 1 DAY PRIOR\n",tm,td,y);
            else if(d-td<=7 && d-td>=2)
                printf("%d/%d/%d IS %d DAYS PRIOR\n",tm,td,y,d-td);
            else
                printf("OUT OF RANGE\n");

        }
        else if(m==1 && tm==12)
        {
            x=31-td+d;
            if(x==1)
                printf("%d/%d/%d IS 1 DAY PRIOR\n",tm,td,--y);
            else if(x<=7 && x>=2)
                printf("%d/%d/%d IS %d DAYS PRIOR\n",tm,td,--y,x);
            else
                printf("OUT OF RANGE\n");
        }
        else if(m==12 && tm==1)
        {
            x=31-d+td;
            if(x==1)
                printf("%d/%d/%d IS 1 DAY AFTER\n",tm,td,++y);
            else if(x<=7 && x>=2)
                printf("%d/%d/%d IS %d DAYS AFTER\n",tm,td,++y,x);
            else
                printf("OUT OF RANGE\n");
        }
        else if(m-tm==-1)
        {
            x=a[m]-d+td;
            if(x==1)
                printf("%d/%d/%d IS 1 DAY AFTER\n",tm,td,y);
            else if(x<=7 && x>=2)
                printf("%d/%d/%d IS %d DAYS AFTER\n",tm,td,y,x);
            else
                printf("OUT OF RANGE\n");
        }
        else if(m-tm==1)
        {
            x=a[tm]-td+d;
            if(x==1)
                printf("%d/%d/%d IS 1 DAY PRIOR\n",tm,td,y);
            else if(x<=7 && x>=2)
                printf("%d/%d/%d IS %d DAYS PRIOR\n",tm,td,y,x);
            else
                printf("OUT OF RANGE\n");
        }
        else printf("OUT OF RANGE\n");
    }
}
