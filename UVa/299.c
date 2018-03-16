#include<stdio.h>
int main()
{
    long int t,n,a[1000],b,i,j,c;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%ld",&a[i]);
        }
        c=0;
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                if(a[i]>a[j])
                {
                    b=a[i];
                    a[i]=a[j];
                    a[j]=b;
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %ld swaps.\n",c);
    }
    return 0;
}
