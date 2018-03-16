#include<stdio.h>
#include<math.h>
#define Pi acos(-1.0)
int main()
{
    int T,L,i;
    double W,R,area_red,area_green;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&L);
        W=L*(6.0/10.0);
        R=L*(2.0/10.0);
        area_red=Pi*R*R;
        area_green=(L*W)-area_red;
        printf("%.2lf %.2lf\n",area_red,area_green);
    }
    return 0;
}
