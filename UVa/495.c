#include<stdio.h>
#define lim 5050
#define len 1050
int a[lim][len];
void fbn()
{
    int n,i,j;
    a[0][0]=0;
    a[1][0]=1;
    a[2][0]=1;
    for(i=3;i<lim;i++)
    {
        for(j=0;j<len;j++)
        {
            a[i][j]+=a[i-2][j]+a[i-1][j];
            if(a[i][j]>=10)
            {
                a[i][j+1]+=a[i][j]/10;
                a[i][j]%=10;
            }
        }
    }

}
int main()
{
    fbn();
    int n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=len-1;i>0;i--)
        {
            if(a[n][i]!=0) break;
        }
        printf("The Fibonacci number for %d is ",n);
        for(;i>=0;i--)
            printf("%d",a[n][i]);
        printf("\n");
    }
    return 0;
}






