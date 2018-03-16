#include<stdio.h>
int main()
{
    double a,b,n,i;
    int c;
    while(scanf("%lf%lf",&a,&b)==2){
        c=0;
        if(a==0&&b==0) break;
        else
        {
            for(i=a;i<=b;i++)
            {
                n=sqrt(i);
                if(n==(int)n) c++;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
