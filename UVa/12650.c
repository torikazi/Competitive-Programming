#include<stdio.h>
int main()
{
    int m,n,i,j,a[100000];
    while(scanf("%d%d",&m,&n)==2)
    {
        for(i=1;i<=m;i++)
        {
            a[i]=0;
        }
        while(n--)
        {
            scanf("%d",&i);
            a[i]=i;
        }
        for(i=1,j=0;i<=m;i++)
        {
            if(a[i]==0) printf("%d ",i);
            else j++;
        }
        if(j==m) printf("*");
        printf("\n");
    }
    return 0;
}
