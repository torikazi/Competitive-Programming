#include<stdio.h>
int main()
{
    int n,s,i,m,k;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(i=0,s=0;i<n;i++)
        {
            s+=pow(2,i);
        }
        k=pow(2,n-1);
        k+=m-1;
        printf("%d\n",k);
    }
    return 0;
}
