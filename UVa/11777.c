#include<stdio.h>
int main()
{
    int n,T1,T2,F,A,a,b,c,i;
    float CT1,CT2,CT,total;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d%d%d%d",&T1,&T2,&F,&A,&a,&b,&c);
        if(a>=b&&a>=c)
        {
            CT1=a;
            if(b>=c) CT2=b;
            else CT2=c;
        }
        else if(b>=c&&b>=a)
        {
            CT1=b;
            if(a>=c) CT2=a;
            else CT2=c;
        }
        else if(c>=b&&c>=a)
        {
            CT1=c;
            if(a>=b) CT2=a;
            else CT2=b;
        }
        CT=(CT1+CT2)/2;
        total=T1+T2+F+A+CT;
        printf("Case %d: ",i);
        if(total>=90) printf("A\n");
        else if(total>=80&&total<90) printf("B\n");
        else if(total>=70&&total<80) printf("C\n");
        else if(total>=60&&total<70) printf("D\n");
        else if(total<60) printf("F\n");
    }
    return 0;
}
