#include<stdio.h>
int main()
{
    int T,R,i,a1,a2,b1,b2;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&R);
        printf("Case %d:\n",i);
        a1=5*R/20*9;
        a2=5*R*6/10/2;
        printf("-%d %d\n",a1,a2);
        b1=5*R/20*11;
        b2=a2;
        printf("%d %d\n",b1,b2);
        printf("%d -%d\n",b1,b2);
        printf("-%d -%d\n",a1,a2);
    }
    return 0;
}
