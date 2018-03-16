#include<stdio.h>
int main()
{
    int t=1,a[20],b[20],i,j,n;
    while(scanf("%d",&n)==1)
    {
        if(n<0) break;
        for(i=1;i<=12;i++)
            scanf("%d",&a[i]);
        for(j=1;j<=12;j++)
            scanf("%d",&b[j]);
        printf("Case %d:\n",t);
        t++;
        for(i=1;i<=12;i++)
        {
            if(n>=b[i])
            {
                printf("No problem! :D\n");
                n=n-b[i];
            }
            else
                printf("No problem. :(\n");
            n=n+a[i];
        }
    }
    return 0;
}
