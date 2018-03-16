#include<stdio.h>
int main()
{
    int l,h,n,i,j,k,m;
    scanf("%d", &n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        scanf(" %d %d",&h,&l);
        {
            for(j=1;j<=l;j++)
            {
                for(k=1;k<=h;k++)
                {
                    for(m=1;m<=k;m++)
                        printf("%d",k);
                    printf("\n");
                }
                for(k=h-1;k>=1;k--)
                {
                    for(m=1;m<=k;m++)
                        printf("%d",k);
                    printf("\n");
                }
                if(j!=l) printf("\n");
            }
            if(i!=n) printf("\n");
        }
    }
    return 0;
}
