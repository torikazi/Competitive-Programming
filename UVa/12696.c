#include<stdio.h>
int main()
{
    double a,b,c,g;
    int i,t,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&g);
        if(a+b+c<=125&&g<=7)
        {
            printf("1\n");
            sum+=1;
        }
        else
        {
            if(a<=56&&b<=45&&c<=25&&g<=7)
            {
                printf("1\n");
                sum+=1;
            }
            else printf("0\n");
        }
    }
    printf("%d\n",sum);
    return 0;
}
