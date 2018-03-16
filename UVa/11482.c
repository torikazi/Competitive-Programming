#include<stdio.h>
int main()
{
    int n,m,i,j,k,l;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(k=m;k>=1;k--)
        {
            for(l=1;l<=m;l++)
            {
                for(i=n;i>=1;i--)
                {
                    for(j=i-1;j>=1;j--)
                        printf(".");
                    printf("/");
                    for(j=1;j<=2*(n-i);j++)
                    {
                        if(i==1) printf("_");
                        else printf(".");
                    }
                    printf("\\");
                    for(j=i-1;j>=1;j--)
                        printf(".");
                    printf("\n");
                }
                printf("\n");
            }
            //printf("\n");
        }


    }
}
