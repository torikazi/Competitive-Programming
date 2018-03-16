#include<stdio.h>
int main()
{
    int T,c,d,i;
    float F,C,res;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&c,&d);
        C=(d-32)*(5.00/9.00);
        res=C+c+17.777777;
        printf("Case %d: %.2f\n",i,res);
    }
    return 0;
}
