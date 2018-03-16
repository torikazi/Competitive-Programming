#include<stdio.h>
int main()
{
    int DD,MM,YY,dd,mm,yy,T,i,z;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d/%d/%d",&DD,&MM,&YY);
        scanf( "%d/%d/%d",&dd,&mm,&yy);
        z=YY-yy;
        if(MM<mm) z--;
        else if(MM==mm)
        {
            if(DD<dd) z--;
        }
        if(z<0) printf("Case #%d: Invalid birth date\n",i);
        else if(z>130) printf("Case #%d: Check birth date\n",i);
        else printf("Case #%d: %d\n",i,z);
    }
    return 0;
}
