#include<stdio.h>
int main()
{
    double cow,car,show,ans;
    while(scanf("%lf%lf%lf",&cow,&car,&show)==3)
    {
        ans=(cow+car-1)/(cow+car)*car/(cow+car-show-1);
        printf("%lf\n",ans);
    }
    return 0;
}
