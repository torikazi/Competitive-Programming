#include<stdio.h>
int main()
{
    int t,a[100],i,m,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        if(j==1) printf("Lumberjacks:\n");
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1,m=0;i<10;i++)
        {
            if(a[i-1]<=a[i]) m=1;
            else
            {
                m=0;
                break;
            }
        }
        if(m==0)
        {
            for(i=1,m=0;i<10;i++)
            {
                if(a[i-1]>=a[i]) m=0;
                else
                {
                    m=1;
                    break;
                }
            }
            if(m==1) printf("Unordered\n");
            else printf("Ordered\n");
        }
        else printf("Ordered\n");

    }
    return 0;
}
