#include<stdio.h>
int main()
{
    int n,i;
    float a[1005],s,sum;
    while(scanf("%d",&n)==1)
    {
        s=0;
        for(i=1;i<=n;i++)
        {
            scanf("%f",&a[i]);
            s+=a[i];
        }
        s/=n;
        sum=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]<s)
                sum+=s-a[i];
        }
        printf("%.2f\n",sum);
    }
    return 0;
}
