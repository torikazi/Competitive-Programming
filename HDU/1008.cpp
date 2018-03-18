#include<stdio.h>
int main()
{
    int t,n,a[1000],i,s;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        s=a[0]*6+5;
        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1]) s+=((a[i]-a[i-1])*6)+5;
            else s+=((a[i-1]-a[i])*4)+5;
        }
        printf("%d\n",s);
    }
    return 0;
}
