#include<stdio.h>
int main()
{
    char a[105][20];
    int i,j,n,d[105],m[105],y[105],x[105],z,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",a[i],&d[i],&m[i],&y[i]);
        x[i]=d[i]+m[i]*31+y[i]*365;
    }
    max=x[0];
    for(i=0;i<n;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
            z=i;
        }
    }
    printf("%s",a[z]);
    return 0;
}
