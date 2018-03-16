#include<stdio.h>
int main()
{
    int n,a[105],m=1,sum,c,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        sum=0;
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        sum/=n;
        for(i=0;i<n;i++)
        {
            if(a[i]>sum) c+=a[i]-sum;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",m,c);
        m++;
    }
    return 0;
}
