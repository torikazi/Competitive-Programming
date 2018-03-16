#include<stdio.h>
int main()
{
    int t,n,x,k,i,j,a[100000],p,y,z,flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        k=0;
        flag=0;
        for(i=2;i<=n;i++)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0) break;
            }
            if(i==j)
            {
                a[k]=i;
                k++;
            }
        }
        for(i=k-1;i>=0;i--)
        {
            for(p=0;p<n;p++)
            {
                x=p*a[i];
                y=(p+1)*a[i];
                z=n-p*a[i];
                if(x<=n&&y>n)
                {
                    flag=1;
                    printf("%d\n",z);
                    break;
                }
            }
            if(flag=1) break;
        }
    }
}
