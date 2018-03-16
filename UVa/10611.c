#include<stdio.h>
int main()
{
    int n,m,a[60000],b[60000],i,j,max,min;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=1;i<=m;i++)
    {
        max=a[1];
        min=a[n];
        for(j=1;j<=n;j++)
        {
            if(a[j]>max&&a[j]<b[i])
                max=a[j];
            if(a[j]<min&&a[j]>b[i])
                min=a[j];
        }
        if(max>=b[i]&&min<=b[i]) printf("X X\n");
        else if(max>=b[i]) printf("X %d\n",min);
        else if(min<=b[i]) printf("%d X\n",max);
        else printf("%d %d\n",max,min);
    }
    return 0;
}
