#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    n=n/2+1;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i+1;j--)
            printf("*");
        for(j=1;j<=i;j++)
            printf("D");
        for(j=2;j<=i;j++)
            printf("D");
        for(j=n;j>=i+1;j--)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        for(j=n-i;j>1;j--)
            printf("D");
        for(j=n;j>i;j--)
            printf("D");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
