#include<stdio.h>
int main()
{
    int year,hulu,bulu,f;
    while(scanf("%d",&year)==1)
    {
        f=0;
        if((year%4==0&&year%100!=0)||year%400==0)
        {
            f=1;
            printf("This is leap year.\n");
        }
        if(year%55==0&&f==1)
            printf("This is buluculu festival year.\n");
        if(year%15==0)
            printf("This is huluculu festival year.\n");
        else if(f!=1&&year%100==0||(year%4!=0&&year%400!=0))
            printf("This is an ordinary year.\n");
        printf("\n");
    }
    return 0;
}
